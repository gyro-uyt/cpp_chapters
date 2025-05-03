package entity;
// this will store the variables that will be used by in player, monster and NPC classes, this will be Parent class for other classes like player, npc, etc.

import java.awt.image.BufferedImage;

public class Entity {

    public int worldX, worldY;
    public int speed;

    // it describes an image with an accessible buffer of image data. (We use this to store our image files)
    public BufferedImage up1, up2, down1, down2, left1, left2, right1, right2;
    public String direction;

    public int spriteCounter = 0;
    public int spriteNumber = 1;

}
