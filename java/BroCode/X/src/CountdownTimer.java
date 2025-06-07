import javax.swing.*;

public class CountdownTimer {
    public static void main(String[] args) {

        JFrame frame = new JFrame("Timer");
        frame.setSize(230, 150);
        frame.setLocationRelativeTo(null);
        frame.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);

        JPanel panel = new JPanel();
        panel.setLayout(new BoxLayout(panel, BoxLayout.Y_AXIS));

        JLabel askLabel = new JLabel("How many seconds:");
        JTextField enterSeconds = new JTextField();
        JButton startTimer = new JButton("Start");
        JLabel timeLeft = new JLabel("Time left: ");


        panel.add(askLabel);
        panel.add(Box.createVerticalStrut(10));
        panel.add(enterSeconds);
        panel.add(Box.createVerticalStrut(10));
        panel.add(startTimer);
        panel.add(Box.createVerticalStrut(10));
        panel.add(timeLeft);
        panel.add(Box.createVerticalStrut(10));

        frame.add(panel);
        frame.setVisible(true);

        startTimer.addActionListener(e -> {
            try {
                int timer = Integer.parseInt(enterSeconds.getText());
                final int[] secondsLeft = {timer};
                startTimer.setEnabled(false);   // disables multiple clicks

                Timer swingTimer = new Timer(1000, null);
                swingTimer.addActionListener(evt -> {
                    if (secondsLeft[0] > 0) {
                        timeLeft.setText("Time left: " + secondsLeft[0] + "s");
                        secondsLeft[0]--;
                    } else {
                        timeLeft.setText("TIME'S UP!");
                        startTimer.setEnabled(true);
                        swingTimer.stop();
                    }
                });

                swingTimer.start();

            } catch (NumberFormatException ex) {
                timeLeft.setText("Please enter a valid number!");
            }
        });
    }
}
