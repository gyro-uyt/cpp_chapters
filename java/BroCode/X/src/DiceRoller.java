import javax.swing.*;
import java.awt.*;
import java.util.Objects;
import java.util.Random;

public class DiceRoller {
    public static void main(String[] args) {

        // Generating random number
        Random random = new Random();

        // Setting up the frame
        JFrame frame = new JFrame("Dice Roller");
        frame.setSize(250, 200);
        frame.setLocationRelativeTo(null);
        frame.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);

        // Components
        JLabel welcomeMessage = new JLabel("Welcome to Dice Roller", SwingConstants.CENTER);
        JButton rollDice = new JButton("Roll the Dice");
        rollDice.setHorizontalAlignment(SwingConstants.CENTER);
        JLabel result = new JLabel("Your number is:", SwingConstants.CENTER);
        
        JLabel imageLabel = new JLabel();
        imageLabel.setHorizontalAlignment(SwingConstants.CENTER);
        imageLabel.setPreferredSize(new Dimension(100, 100));

        ImageIcon defaultIcon = new ImageIcon(Objects.requireNonNull(DiceRoller.class.getResource("/dice0.png")));
        imageLabel.setIcon(new ImageIcon(defaultIcon.getImage().getScaledInstance(80, 80, Image.SCALE_SMOOTH)));

        // Action
        rollDice.addActionListener(e -> {
            int randomNumber = random.nextInt(1, 7);
            result.setText("Your number is: " + randomNumber);
            String imagePath = "/dice" + randomNumber + ".png";
            ImageIcon icon = new ImageIcon(Objects.requireNonNull(DiceRoller.class.getResource(imagePath)));
            Image scaled = icon.getImage().getScaledInstance(80, 80, Image.SCALE_SMOOTH);
            imageLabel.setIcon(new ImageIcon(scaled));
        });

        // Layout
        frame.setLayout(new GridBagLayout());
        GridBagConstraints gbc = new GridBagConstraints();
        gbc.weightx = 1;
        gbc.weighty = 1;

        gbc.gridx = 0;
        gbc.gridy = 0;
        gbc.gridwidth = 2;
        gbc.fill = GridBagConstraints.HORIZONTAL;

        frame.add(welcomeMessage, gbc);

        gbc.gridy = 1;   // row
        gbc.gridx = 0;   // column
        gbc.gridwidth = 2;
        gbc.fill = GridBagConstraints.HORIZONTAL;
        frame.add(rollDice, gbc);

        gbc.gridy = 3;
        gbc.gridx = 0;
        gbc.gridwidth = 1;
        gbc.fill = GridBagConstraints.HORIZONTAL;
        result.setPreferredSize(new Dimension(100, 30));
        frame.add(result, gbc);

        gbc.gridy = 3;
        gbc.gridx = 1;
        gbc.gridwidth = 1;
        gbc.fill = GridBagConstraints.HORIZONTAL;
        frame.add(imageLabel, gbc);


        // Set visible should be last
        frame.setVisible(true);
    }
}