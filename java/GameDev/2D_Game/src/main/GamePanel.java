package main;

import entity.Player;
import tile.TileManager;

import javax.swing.*;
import java.awt.*;

public class GamePanel extends JPanel implements Runnable {

    // Screen Settings
    final int originalTileSize = 16;    // 16x16 tile, for Player/npc/any character
    // this is very small size for Modern high res-monitors, so we'll scale
    final int scale = 3;
    // now we can make our retro style game, also Enjoy it on today's monitors, now player's size = 16x3 = 48x48p

    public final int tileSize = originalTileSize * scale;  // 48x48 tile

    // this is screen size of 4:3
    final int maxScreenCol = 16;
    final int maxScreenRow = 12;
    // Now, We can display 16 tiles horizontally and 12 tiles vertically, where each tile is 48x48p
    final int screenWidth = tileSize * maxScreenCol;    // 768p
    final int screenHeight = tileSize * maxScreenRow;   // 576p

    // FPS
    // WHY FPS IN NECESSARY? bcz. for light games like this when we pressed a key for even a second then in that second as speed of gpu is fast it performed update() thousands of time, so pressing 'D' will move player not by 4px but 1000s of pixels, hence we need to slow down to control this problem
    // Even during a short key touch, the update() get's called so many times and add 4(speed) to playerY each time
    int FPS = 60;

    TileManager tileM = new TileManager(this);
    KeyHandler keyH = new KeyHandler();
    Thread gameThread;
    Player player = new Player(this, keyH);

    // Set player's default position    (this is just for testing, well use values from Player class
//    int playerX = 100;
//    int playerY = 100;
//    int playerSpeed = 4;    // this means the player moves 4px

    // Constructor of this Game Panel
    public GamePanel() {

        this.setPreferredSize(new Dimension(screenWidth, screenHeight));
        this.setBackground(Color.BLACK);
        this.setDoubleBuffered(true);   // better rendering performance, if true then all drawing from this component will be done in an offscreen painting buffer
        this.addKeyListener(keyH);  // added keyHandler to this GamePanel
        this.setFocusable(true);    // with this, this GamePanel can be "focused" to receive key input

    }

    public void startGameThread() {
        gameThread = new Thread(this);
        gameThread.start();
    }

    /*
        public void run() {
            while (gameThread != null) {

     //            long currentTime=System.nanoTime(); // Returns the current value of the running Java Virtual Machine's high-resolution time source, in nanoseconds
                // use ms(milli) too but nano-sec will be more precise
     //            System.out.println("Current Time: "+currentTime);

                // 1 UPDATE: update information such as character position
                update();
                // 2 DRAW: draw the screen with the updated information
                repaint();  // this is how, paintComponent is CALLED!
            }
            // if FPS of game is 30, then it does the above 2 tasks(update & draw) 30 times per second
        }

     */
    // delta-method for FPS problem
    public void run() {
        double drawInterval = (double) 1000000000 / FPS;    // 1sec/60 = 0.01666sec, wrote 1 billion here bcz, time is in ns, so 1B ns = 1s
        // this means update & repaint should happen every 0.0166 sec Only for 60fps
        double delta = 0;
        long lastTime = System.nanoTime();
        long currentTime;

        long timer = 0;
        int drawCount = 0;
        /*
        delta measures how many "frame times" have passed
        If delta = 1, it means 1 frame’s worth of time has passed (like 1/60th of a second if FPS = 60)
        If delta = 0.5, it means half a frame’s worth of time has passed — so we WAIT
        If delta = 1.8, it means we're behind and need to do 1 update now, and keep 0.8 in memory to handle in the next loop

        delta is like a stopWatch Coach, measures time for every frame and performs actions based on their time,
        1 delta = 1/60 = 0.0166 -> ideal time
        if, delta < 1/60 we need to wait till it becomes 1/60
        if, delta >= 1/60 then perform the actions and carry the extra time to the next iteration

        Why use delta?
        To make the game run at a consistent speed regardless of your PC’s speed or lag
         */
        while (gameThread != null) {
            currentTime = System.nanoTime();
            delta += (currentTime - lastTime) / drawInterval;   // tells us how many frames' worth of time has passed
            timer += (currentTime - lastTime);
            lastTime = currentTime;

            if (delta >= 1) {
                update();
                repaint();
                delta--;
                drawCount++;
            }

            if (timer >= 1000000000) {
                System.out.println("FPS: " + drawCount);
                drawCount = 0;
                timer = 0;
            }
        }
    }

    // Sleep-method for FPS problem
    /*
    public void run(){
        double drawInterval = 1000000000/FPS; // 0.01666 seconds
        double nextDrawTime = System.nanaTime() + drawInterval;

        while (gameThread != null){
            update();
            repaint();

            try{
                double remainingTime = nextDrawTime - System.nanoTime()
                remainingTime = remainingTime/1000000;

                if (remainingTime < 0){
                    remainingTime = 0;
                }

                Thread.sleep((long) remainingTime);

                nextDrawTime += drawInterval;
            }
            catch (InterruptedException e){
                e.printStackTrace();
            }
        }
    }
     */

    public void update() {
        player.update();
        // we change playerPosition here
        // in java upper left corner is X:0 Y:0, X value increases to the right & Y value increases as they go down
//        if (keyH.upPressed)
//            playerY -= playerSpeed;
//        else if (keyH.downPressed)
//            playerY += playerSpeed;
//        else if (keyH.rightPressed)
//            playerX += playerSpeed;
//        else if (keyH.leftPressed)
//            playerX -= playerSpeed;

    }

    // paintComponent is built-in method of java, one of the standard method to draw things on JPanel, it is called by "repaint()" not "paintComponent"
    public void paintComponent(Graphics g) {
        // Graphics is a class that has many functions to draw objects on the screen
        super.paintComponent(g);    // write this line whenever using paintComponent, super means parent class

        Graphics2D g2 = (Graphics2D) g;
        // This Graphics2D class extends the Graphics class to provide more sophisticated control over geometry, coordinate transformations, color management, and text layout
        // assume 'g' as your paint brush to draw on the screen
//        g2.setColor(Color.cyan);   // sets a color to use for drawing objects
//
//        g2.fillRect(playerX, playerY, tileSize, tileSize);
        // draws a rectangle and fill it with the specified color, x & y are coordinates, next 2 are widths & height
        // now, it draws a rectangle of size tileSize X tileSize at coordinates (100, 100) and fills it with the White color

        tileM.draw(g2); // draw Tiles first than Player

        player.draw(g2);

        g2.dispose();   // it disposes of this graphics context and release any system resources that it is using

    }
}
