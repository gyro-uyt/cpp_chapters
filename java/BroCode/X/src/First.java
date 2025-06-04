import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class First {
    public static void main(String[] args) {

        // Create a window(JFrame)
        JFrame frame = new JFrame("Celsius Converter");
        frame.setSize(350, 150);
        frame.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        frame.setLocationRelativeTo(null);
        frame.setLayout(new FlowLayout());

        // Components
        JLabel celsiusLabel = new JLabel("Enter Celsius: ");
        JTextField celsiusField = new JTextField(10);
        JButton convertButton = new JButton("Convert");
        JLabel resultLabel = new JLabel("Fahrenheit: ");

        // Add action to the button
        convertButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e){
                try {
                    double celsius = Double.parseDouble(celsiusField.getText());
                    double fahrenheit = celsius * 9/5 + 32;
                    resultLabel.setText("Fahrenheit: "+fahrenheit);
                } catch (NumberFormatException ex){
                    resultLabel.setText("Please enter a valid number.");
                }
            }
        });

        // Add everything to the frame
        frame.add(celsiusLabel);
        frame.add(celsiusField);
        frame.add(convertButton);
        frame.add(resultLabel);

        // Show the window
        frame.setVisible(true);
    }
}
