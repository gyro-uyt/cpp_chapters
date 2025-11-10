#!/bin/fish

# Folder containing wallpapers
WALLPAPER_DIR="/home/gyro/Pictures/gruv/"

# Get a random wallpaper
while true; do
    WALLPAPER=$(find "$WALLPAPER_DIR" -type f \( -iname "*.jpg" -o -iname "*.png" -o -iname "*.jpeg" \) | shuf -n 1)
    hyprctl hyprpaper preload "$WALLPAPER"
    hyprctl hyprpaper wallpaper "HDMI-A-1,$WALLPAPER"
    sleep 3600  # 1 hour = 3600 seconds
done

