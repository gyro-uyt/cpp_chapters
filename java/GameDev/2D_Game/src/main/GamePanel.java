package main;

import entity.Player;
import tile.TileManager;

import javax.swing.*;
import java.awt.*;

public class GamePanel extends JPanel implements Runnable {

    // SCREEN SETTINGS
    final int originalTileSize = 16;    // 16x16 tile, for Player/npc/any character
    final int scale = 3;
    public final int tileSize = originalTileSize * scale;  // 48x48 tile

    // this is screen size of 4:3
    public final int maxScreenCol = 16;
    public final int maxScreenRow = 12;

    public final int screenWidth = tileSize * maxScreenCol;    // 768p
    public final int screenHeight = tileSize * maxScreenRow;   // 576p

    // WORLD SETTINGS
    public final int maxWorldCol = 50;
    public final int maxWorldRow = 50;
    public final int worldWidth = tileSize * maxWorldCol;
    public final int worldHeight = tileSize * maxWorldRow;

    // FPS
    int FPS = 60;

    TileManager tileM = new TileManager(this);
    KeyHandler keyH = new KeyHandler();
    Thread gameThread;
    public Player player = new Player(this, keyH);

    public GamePanel() {

        this.setPreferredSize(new Dimension(screenWidth, screenHeight));
        this.setBackground(Color.BLACK);
        this.setDoubleBuffered(true);   // better rendering performance
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
        double drawInterval = (double) 1000000000 / FPS;
        double delta = 0;
        long lastTime = System.nanoTime();
        long currentTime;

        long timer = 0;
        int drawCount = 0;

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

    public void update() {

        player.update();
        // we change playerPosition here
        // in java upper left corner is X:0 Y:0, X value increases to the right & Y value increases as they go down
    }

    public void paintComponent(Graphics g) {

        super.paintComponent(g);    // write this line whenever using paintComponent

        Graphics2D g2 = (Graphics2D) g;

        tileM.draw(g2); // draw Tiles first than Player

        player.draw(g2);

        g2.dispose();

    }
}
