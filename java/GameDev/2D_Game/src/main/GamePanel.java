package main;

import javax.swing.*;
import java.awt.*;

public class GamePanel extends JPanel implements Runnable {

    // Screen Settings
    final int originalTileSize = 16;    // 16x16 tile, for Player/npc/any character
    // this is very small size for Modern high res-monitors, so we'll scale
    final int scale = 3;
    // now we can make our retro style game, also Enjoy it on today's monitors, now player's size = 16x3 = 48x48p

    final int tileSize = originalTileSize * scale;  // 48x48 tile

    // this is screen size of 4:3
    final int maxScreenCol = 16;
    final int maxScreenRow = 12;
    // Now, We can display 16 tiles horizontally and 12 tiles vertically, where each tile is 48x48p
    final int screenWidth = tileSize * maxScreenCol;    // 768p
    final int screenHeight = tileSize * maxScreenRow;   // 576p

    Thread gameThread;

    // Constructor of this Game Panel
    public GamePanel() {

        this.setPreferredSize(new Dimension(screenWidth, screenHeight));
        this.setBackground(Color.BLACK);
        this.setDoubleBuffered(true);   // better rendering perfo, if true then all drawing from this component will be done in an offscreen painting buffer
    }

    public void startGameThread() {
        gameThread = new Thread(this);
        gameThread.start();
    }

    public void run() {
        while (gameThread!=null){
            System.out.println("game loop is running");
        }
    }
}
