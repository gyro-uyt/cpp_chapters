# How to Install Arch (using archInstall script)

- create space ( I deleted 98.4gbs partition)

- boot into arch

1. setfont ter-132n
2. iwctl
   - device list
   - device wlan0 set-property Powered on // if wlan0 is Powered of
   - station wlan0 get-networks
   - station wlan0 connect <<name_of_network>> // input password in Passphrase
   - exit
3. ping -c 5 google.com // to check if network works
4. pacman -Sy
5. pacman -S archlinux-keyring
6. pacman -S archinstall
7. lsblk
8. cfdisk /dev/nvme0n1 // Creating Partitions
   - Scroll to free space (same as size of partition you deleted earlier)
   - Press Enter on it & input 1G (for efi)
   - choose this new partition & set it's type as EFI System
   - Select free space again & use remaining space for root partition
   - It's type should be Linux filesystem
   - Remember there names
   - Choose Write command and Quit
9. lsblk // new partition should be visible now
10. // Now Format the partitions
11. mkfs.fat -F32 /dev/efi_partition
12. mkfs.ext4 /dev/root_partition
13. // Now Mount the partitions
14. mount /dev/root_partition /mnt
15. mkdir /mnt/boot
16. mount /dev/efi_partition /mnt/boot
17. lsblk // Ensure, efi should be mounted to /mnt/boot & root to /mnt
18. archinstall // running the script
    - Select language
    - Choose locales
    - Choose Mirrors, select your Country
    - Disk configuration > Partitioning > Pre-mounted configuration > /mnt
    - Enable Swap
    - Bootloader > Any (stable: GRUB)
    - Hostname > archlinux
    - Set Root password
    - User account > Add a user > Username > Yes for superuser(sudo)
    - Profile > Type > Desktop > KDE Plasma (any of your choice) // Download GPU drivers manually later
    - Audio > pipewire
    - Kernels > linux // linux-zen for gamers
    - Network configuration > Use NetworkManager
    - Additional packages > nano htop vim etc. // use '/' to search and TAB to select
    - Timezone // use '/' to search and TAB to select
    - Install > Yes // now wait...
    - chroot into installation
19. Install GRUB (it may not be properly installed by script)
20. pacman -S grub efibootmgr dosfstools mtools
21. grub-install --target=x86_64-efi --efi-directory=/boot --bootloader-id=GRUB
22. grub-mkconfig -o /boot/grub/grub.cfg
23. exit (exits the chroot environment)
24. umount -lR /mnt (unmount partitions)
25. shutdown now

- To refresh GRUB list
  1. sudo nano /etc/default/grub
     - uncomment GRUB_DISABLE_OS_PROBER=false (for windows lookup)
  2. sudo pacman -S os-prober
  3. sudo grub-mkconfig -o /boot/grub/grub.cfg
