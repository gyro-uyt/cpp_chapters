package main;

import javax.swing.*;

public class Main {
    public static void main(String[] args){
        JFrame window = new JFrame();
        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        window.setResizable(false);
        window.setTitle("aura-gaming");

        GamePanel gamePanel = new GamePanel();
        window.add(gamePanel);

        window.pack();  // causes this Window to be sized to fit the preferred size and layouts of its subcomponents(=GamePanel)

        window.setLocationRelativeTo(null);
        window.setVisible(true);

        gamePanel.startGameThread();
    }
}
