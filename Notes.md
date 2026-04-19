# オーラ

## Table of Contents

- [C++](#1-c)
- [Endeavor OS](#2-endeavor-os)
- [Git](#3-git)
- [Hyprland](#4-hyprland)
- [Python](#5-python)
- [Vim](#6-vim)
- [VSCode](#7-vscode)
- [Windows](#8-windows)
- [Tips](#9-tips)

## 1. C++

### 1.1 Running on Linux

To compile and run via CLI:

```bash
g++ program.cpp -o program   # compiles program.cpp → program
./program                    # runs the executable
```

Alternative:

```bash
g++ % -o program && ./program   # % = current file
:!g++ % -o program && ./program # run directly in vim (! runs in shell)
``

## Ollama

```bash
curl -fsSL https://ollama.com/install.sh | sh
ollama run deepseek-r1:1.5b
```

## 2. Endeavor OS

### 2.1 Fix brightness problem on RTX laptops

```bash
sudo nano /etc/default/grub
```

Find and update this line (usually at 5–6th line):

```bash
GRUB_CMDLINE_LINUX_DEFAULT="quiet splash acpi_backlight=video acpi_osi=! acpi_osi='Windows 2015'"
```

Then update GRUB:

```bash
sudo grub-mkconfig -o /boot/grub/grub.cfg
```

### 2.2 Enable Bluetooth

```bash
sudo systemctl enable bluetooth.service
sudo systemctl start bluetooth.service
```

### 2.3 Fix DNS resolution issue

```bash
sudo ln -sf /run/systemd/resolve/resolv.conf /etc/resolv.conf
sudo systemctl restart systemd-resolved
sudo bash -c 'echo -e "[Resolve]\nDNS=1.1.1.1 8.8.8.8\nFallbackDNS=1.0.0.1 8.8.4.4" > /etc/systemd/resolved.conf.d/dns.conf'
sudo systemctl restart systemd-resolved
```

### 2.4 Get Fish shell

```bash
sudo pacman -S fish
chsh -s /usr/bin/fish
fish_config    # to change themes
nano ~/.config/fish/config.fish
# set fish_greeting "" <-- Add this line to disable welcome message
```

### 2.5 Disable KDE-Wallet

Navigate to ~/.config/kwalletrc & replace it's contents with,

```bash
[Wallet]
“Enabled=false”
```

### 2.6 Useful Commands

| Command           | Description                                                  |
| ----------------- | ------------------------------------------------------------ |
| `ps`              | Show running processes.                                      |
| `ps aux`          | Detailed list of all processes.                              |
| `ps -ef`          | Another common full-format listing.                          |
| `top`             | Real-time process viewer.                                    |
| `htop`            | Enhanced interactive process viewer (`sudo pacman -S htop`). |
| `atop`            | Advanced system and process monitor (`sudo pacman -S atop`). |
| `pgrep <name>`    | Find PID(s) of processes by name.                            |
| `pidof <program>` | Get PID of a program.                                        |
| `pstree`          | Show processes in a tree structure.                          |
| `kill <PID>`      | Terminate a process.                                         |
| `btop`            | Cool task manager.                                           |
| `fzf`             | Search from CLI.                                             |
| `neofetch`        | Display system specifications in a nice way.                 |
| `ls` / `lsd`      | Display available content (`ls ./` to search).               |
| `ffmpeg`          | Edit/convert video files.                                    |
| `tldr`            | Better version of `--help`. Example: `tldr ffmpeg`.          |

### 2.7 Shortcuts

- **Shift + PrtSc** → Screenshot
- **Alt + Tab** → Switch windows
- **Ctrl + Tab** → Switch browser tabs

## 3. Git

### 3.1 .gitignore

```gitignore
leetcode/*         # ignore everything inside leetcode/
!leetcode/*.cpp    # but don't ignore .cpp files
!leetcode/*.h      # but don't ignore .h files
```

Think of it as a priority system:

1. First rule ignores everything in `leetcode/`
2. Later `!` rules bring back `.cpp` and `.h`

**Syntax notes**:

- `#` → comments
- `*` → wildcard (like shell globbing)
- `!` → negation (keep files even if ignored earlier)
- `/` → path separator

Closest to **Unix shell globbing**, but Git-specific.

### 3.2 Restore

```bash
git restore <nameOfFile>
```

this functions restores the specified file to it's last commit

## 4. Hyprland

```bash
mv old.py new.py   # rename file
rm new.cpp         # delete file
nmtui              # GUI Wi-Fi setup
```

Shortcuts:

- **Super + Q** → New Terminal
- **Super + C** → Close Terminal
- **Super + M** → Exit Hyprland
- **Super + R** → Search

## 5. Python

### 5.1 Create a Virtual environment

```bash
python3 -m venv <nameOfVenv>

# Activate the virtual environment
source <nameOfVenv>/bin/activate # (bash/zsh)
source venv/bin/activate.fish # (fish)

<nameOfVenv>\Scripts\activate.bat # (cmd)
<nameOfVenv>\Scripts\Activate.ps1 # (powershell)

# Deactivate the virtual environment
deactivate
```

### 5.2 Requirements file

```bash
# Output the list of installed packages
pip freeze

# Write the list of installed packages to a file
pip freeze > requirements.text

# Install the packages listed in the requirements.txt file
pip install -r requirements.txt
```

## 6. Vim

```vim
:%y+        " Select all + copy to clipboard
vim ~/.vimrc    " Open vim config
source ~/.vimrc " Reload config instantly
```

## 7. VSCode

### 7.1 Short-cuts

- ctrl+Space-bar -> intelliSense suggestions
- alt+mouseClick -> multi-cursor functionality

### 7.2 To Remove VSCode Icon from Title-bar

```bash
# Open following file
code "C:\Users\<User_Name>\AppData\Local\Programs\Microsoft VS Code\<commit_hash>\resources\app\out\vs\workbench\workbench.desktop.main.css"
# search: '.window-appicon'
#  choose the first one you had searched, change the value: 'width:35px;' to 'width:0px;' 
```

## 8. Windows

### 8.1 Terminal

- **Character Map**
- **Terminal setups**:

  ```powershell
  notepad $PROFILE
  Get-ChildItem $env:POSH_THEMES_PATH
  ```

### 8.2 Git Bash

```bash
git tag -a tagName -m "message here"
git push --tags
```

### 8.3 OhMyPosh

Used ohmyposh to get custom powerlines created my own theme, can be used by running

```bash
oh-my-posh init pwsh --config "$env:POSH_THEMES_PATH\mytheme.omp.json" | Invoke-Expression   
```

Can be set as default by pasting above line in `notepad $PROFILE`

## 9. Tips

### 9.1 How markdown heading anchors work

- Lowercase everything
- Spaces → `-`
- Remove special characters (so `C++` → `#c`, `Endeavor OS` → `#endeavor-os`)

This works natively on GitHub, Obsidian, VS Code preview, and most markdown renderers.
