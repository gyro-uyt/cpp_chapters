import javax.swing.*;
import javax.swing.border.EmptyBorder;
import java.awt.*;
import java.awt.event.*;
import java.text.DecimalFormat;
import java.util.*;
import java.util.List;
import java.util.function.BiFunction;
import java.util.function.Function;

public class ScientificCalculator extends JFrame {
    // Constants
    private static final long serialVersionUID = 1L;
    private static final int WINDOW_WIDTH = 800;
    private static final int WINDOW_HEIGHT = 600;
    private static final String FONT_NAME = "Arial";
    
    // Display components
    private JTextField display;
    private JTextField historyDisplay;
    
    // Memory storage
    private double memoryValue = 0.0;
    private List<String> history = new ArrayList<>();
    
    // State variables
    private boolean waitingForOperand = true;
    private boolean calculationPerformed = false;
    private double lastNumber = 0.0;
    private String pendingOperation = "";
    
    // Function maps
    private Map<String, Function<Double, Double>> unaryFunctions = new HashMap<>();
    private Map<String, BiFunction<Double, Double, Double>> binaryFunctions = new HashMap<>();
    
    // Angle mode
    private boolean inRadians = true;
    
    // Number formatter
    private DecimalFormat df = new DecimalFormat("#.##########");
    
    // Tab pane for organizing functions
    private JTabbedPane functionTabs;
    
    public ScientificCalculator() {
        setTitle("Scientific Calculator");
        setSize(WINDOW_WIDTH, WINDOW_HEIGHT);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
        
        // Initialize function maps
        initializeFunctions();
        
        // Create main layout
        JPanel mainPanel = new JPanel(new BorderLayout(5, 5));
        mainPanel.setBorder(new EmptyBorder(10, 10, 10, 10));
        
        // Create displays
        createDisplays(mainPanel);
        
        // Create function tabs
        functionTabs = new JTabbedPane();
        mainPanel.add(functionTabs, BorderLayout.CENTER);
        
        // Create UI components
        createBasicUI();
        createScientificUI();
        createTrigonometricUI();
        createStatisticsUI();
        createConversionUI();
        
        // Add main panel to frame
        add(mainPanel);
    }
    
    private void createDisplays(JPanel mainPanel) {
        JPanel displayPanel = new JPanel(new BorderLayout(5, 5));
        
        historyDisplay = new JTextField();
        historyDisplay.setEditable(false);
        historyDisplay.setHorizontalAlignment(JTextField.RIGHT);
        historyDisplay.setFont(new Font(FONT_NAME, Font.PLAIN, 14));
        historyDisplay.setPreferredSize(new Dimension(WINDOW_WIDTH, 30));
        
        display = new JTextField("0");
        display.setEditable(false);
        display.setHorizontalAlignment(JTextField.RIGHT);
        display.setFont(new Font(FONT_NAME, Font.BOLD, 24));
        display.setPreferredSize(new Dimension(WINDOW_WIDTH, 50));
        
        displayPanel.add(historyDisplay, BorderLayout.NORTH);
        displayPanel.add(display, BorderLayout.CENTER);
        
        mainPanel.add(displayPanel, BorderLayout.NORTH);
    }
    
    private void initializeFunctions() {
        // Unary functions
        unaryFunctions.put("sqrt", Math::sqrt);
        unaryFunctions.put("x²", x -> x * x);
        unaryFunctions.put("x³", x -> x * x * x);
        unaryFunctions.put("1/x", x -> 1.0 / x);
        unaryFunctions.put("sin", this::calculateSin);
        unaryFunctions.put("cos", this::calculateCos);
        unaryFunctions.put("tan", this::calculateTan);
        unaryFunctions.put("asin", Math::asin);
        unaryFunctions.put("acos", Math::acos);
        unaryFunctions.put("atan", Math::atan);
        unaryFunctions.put("sinh", Math::sinh);
        unaryFunctions.put("cosh", Math::cosh);
        unaryFunctions.put("tanh", Math::tanh);
        unaryFunctions.put("log", Math::log10);
        unaryFunctions.put("ln", Math::log);
        unaryFunctions.put("exp", Math::exp);
        unaryFunctions.put("abs", Math::abs);
        unaryFunctions.put("floor", Math::floor);
        unaryFunctions.put("ceil", Math::ceil);
        unaryFunctions.put("fact", this::factorial);
        unaryFunctions.put("10^x", x -> Math.pow(10, x));
        unaryFunctions.put("e^x", Math::exp);
        unaryFunctions.put("sin⁻¹", Math::asin);
        unaryFunctions.put("cos⁻¹", Math::acos);
        unaryFunctions.put("tan⁻¹", Math::atan);
        unaryFunctions.put("rand", x -> Math.random());
        
        // Binary functions
        binaryFunctions.put("+", (a, b) -> a + b);
        binaryFunctions.put("-", (a, b) -> a - b);
        binaryFunctions.put("×", (a, b) -> a * b);
        binaryFunctions.put("÷", (a, b) -> a / b);
        binaryFunctions.put("mod", (a, b) -> a % b);
        binaryFunctions.put("pow", Math::pow);
        binaryFunctions.put("root", (a, b) -> Math.pow(a, 1.0/b));
        binaryFunctions.put("log_base", (a, b) -> Math.log(a) / Math.log(b));
        binaryFunctions.put("%", (a, b) -> a * b / 100.0);
        binaryFunctions.put("nPr", this::permutation);
        binaryFunctions.put("nCr", this::combination);
    }
    
    private double calculateSin(double x) {
        if (!inRadians) {
            x = Math.toRadians(x);
        }
        return Math.sin(x);
    }
    
    private double calculateCos(double x) {
        if (!inRadians) {
            x = Math.toRadians(x);
        }
        return Math.cos(x);
    }
    
    private double calculateTan(double x) {
        if (!inRadians) {
            x = Math.toRadians(x);
        }
        return Math.tan(x);
    }
    
    private double factorial(double n) {
        if (n < 0) return Double.NaN;
        if (n == 0 || n == 1) return 1;
        
        double result = 1;
        for (int i = 2; i <= (int)n; i++) {
            result *= i;
        }
        return result;
    }
    
    private double permutation(double n, double r) {
        if (n < 0 || r < 0 || n < r) return Double.NaN;
        return factorial(n) / factorial(n - r);
    }
    
    private double combination(double n, double r) {
        if (n < 0 || r < 0 || n < r) return Double.NaN;
        return factorial(n) / (factorial(r) * factorial(n - r));
    }
    
    private void createBasicUI() {
        JPanel basicPanel = new JPanel(new BorderLayout());
        JPanel buttonPanel = new JPanel(new GridLayout(5, 4, 5, 5));
        
        // Create digit buttons
        for (int i = 7; i <= 9; i++) {
            addButton(buttonPanel, String.valueOf(i), this::digitClicked);
        }
        addButton(buttonPanel, "DEL", e -> backspaceClicked());
        
        for (int i = 4; i <= 6; i++) {
            addButton(buttonPanel, String.valueOf(i), this::digitClicked);
        }
        addButton(buttonPanel, "C", e -> clear());
        
        for (int i = 1; i <= 3; i++) {
            addButton(buttonPanel, String.valueOf(i), this::digitClicked);
        }
        addButton(buttonPanel, "AC", e -> clearAll());
        
        addButton(buttonPanel, "0", this::digitClicked);
        addButton(buttonPanel, ".", e -> pointClicked());
        addButton(buttonPanel, "+/-", e -> changeSignClicked());
        addButton(buttonPanel, "=", e -> equalClicked());
        
        JPanel operationsPanel = new JPanel(new GridLayout(5, 1, 5, 5));
        addButton(operationsPanel, "+", this::binaryOperatorClicked);
        addButton(operationsPanel, "-", this::binaryOperatorClicked);
        addButton(operationsPanel, "×", this::binaryOperatorClicked);
        addButton(operationsPanel, "÷", this::binaryOperatorClicked);
        addButton(operationsPanel, "%", this::binaryOperatorClicked);
        
        JPanel memoryPanel = new JPanel(new GridLayout(4, 1, 5, 5));
        addButton(memoryPanel, "MC", e -> clearMemory());
        addButton(memoryPanel, "MR", e -> readMemory());
        addButton(memoryPanel, "M+", e -> addToMemory());
        addButton(memoryPanel, "MS", e -> setMemory());
        
        basicPanel.add(buttonPanel, BorderLayout.CENTER);
        basicPanel.add(operationsPanel, BorderLayout.EAST);
        basicPanel.add(memoryPanel, BorderLayout.WEST);
        
        functionTabs.addTab("Basic", basicPanel);
    }
    
    private void createScientificUI() {
        JPanel scientificPanel = new JPanel(new GridLayout(5, 5, 5, 5));
        
        // Create scientific function buttons
        addButton(scientificPanel, "x²", this::unaryOperatorClicked);
        addButton(scientificPanel, "x³", this::unaryOperatorClicked);
        addButton(scientificPanel, "√", this::unaryOperatorClicked);
        addButton(scientificPanel, "∛", e -> applyUnaryOperator(x -> Math.pow(x, 1.0/3.0)));
        addButton(scientificPanel, "xʸ", this::binaryOperatorClicked);
        
        addButton(scientificPanel, "10ˣ", e -> applyUnaryOperator(x -> Math.pow(10, x)));
        addButton(scientificPanel, "eˣ", e -> applyUnaryOperator(Math::exp));
        addButton(scientificPanel, "log", this::unaryOperatorClicked);
        addButton(scientificPanel, "ln", this::unaryOperatorClicked);
        addButton(scientificPanel, "ʸ√x", e -> applyBinaryOperator("root"));
        
        addButton(scientificPanel, "x!", e -> applyUnaryOperator(this::factorial));
        addButton(scientificPanel, "1/x", this::unaryOperatorClicked);
        addButton(scientificPanel, "mod", this::binaryOperatorClicked);
        addButton(scientificPanel, "abs", this::unaryOperatorClicked);
        addButton(scientificPanel, "rand", e -> applyUnaryOperator(x -> Math.random()));
        
        addButton(scientificPanel, "floor", this::unaryOperatorClicked);
        addButton(scientificPanel, "ceil", this::unaryOperatorClicked);
        addButton(scientificPanel, "nPr", this::binaryOperatorClicked);
        addButton(scientificPanel, "nCr", this::binaryOperatorClicked);
        addButton(scientificPanel, "π", e -> constantClicked(Math.PI));
        
        addButton(scientificPanel, "e", e -> constantClicked(Math.E));
        addButton(scientificPanel, "φ", e -> constantClicked(1.618033988749895));
        addButton(scientificPanel, "γ", e -> constantClicked(0.57721566490153286));
        addButton(scientificPanel, "log₂", e -> applyUnaryOperator(x -> Math.log(x) / Math.log(2)));
        addButton(scientificPanel, "2ˣ", e -> applyUnaryOperator(x -> Math.pow(2, x)));
        
        functionTabs.addTab("Scientific", scientificPanel);
    }
    
    private void createTrigonometricUI() {
        JPanel trigPanel = new JPanel(new BorderLayout());
        JPanel buttonPanel = new JPanel(new GridLayout(5, 4, 5, 5));
        
        // Create angle mode selector
        JPanel angleModePanel = new JPanel();
        JRadioButton radianButton = new JRadioButton("Radians", true);
        JRadioButton degreeButton = new JRadioButton("Degrees", false);
        
        ButtonGroup angleGroup = new ButtonGroup();
        angleGroup.add(radianButton);
        angleGroup.add(degreeButton);
        
        radianButton.addActionListener(e -> inRadians = true);
        degreeButton.addActionListener(e -> inRadians = false);
        
        angleModePanel.add(radianButton);
        angleModePanel.add(degreeButton);
        
        // Create trigonometric function buttons
        addButton(buttonPanel, "sin", this::unaryOperatorClicked);
        addButton(buttonPanel, "cos", this::unaryOperatorClicked);
        addButton(buttonPanel, "tan", this::unaryOperatorClicked);
        addButton(buttonPanel, "sin⁻¹", this::unaryOperatorClicked);
        
        addButton(buttonPanel, "cos⁻¹", this::unaryOperatorClicked);
        addButton(buttonPanel, "tan⁻¹", this::unaryOperatorClicked);
        addButton(buttonPanel, "sinh", this::unaryOperatorClicked);
        addButton(buttonPanel, "cosh", this::unaryOperatorClicked);
        
        addButton(buttonPanel, "tanh", this::unaryOperatorClicked);
        addButton(buttonPanel, "csc", e -> applyUnaryOperator(x -> 1.0 / calculateSin(x)));
        addButton(buttonPanel, "sec", e -> applyUnaryOperator(x -> 1.0 / calculateCos(x)));
        addButton(buttonPanel, "cot", e -> applyUnaryOperator(x -> 1.0 / calculateTan(x)));
        
        addButton(buttonPanel, "csc⁻¹", e -> applyUnaryOperator(x -> Math.asin(1.0 / x)));
        addButton(buttonPanel, "sec⁻¹", e -> applyUnaryOperator(x -> Math.acos(1.0 / x)));
        addButton(buttonPanel, "cot⁻¹", e -> applyUnaryOperator(x -> Math.atan(1.0 / x)));
        addButton(buttonPanel, "π/2", e -> constantClicked(Math.PI / 2));
        
        addButton(buttonPanel, "π/3", e -> constantClicked(Math.PI / 3));
        addButton(buttonPanel, "π/4", e -> constantClicked(Math.PI / 4));
        addButton(buttonPanel, "π/6", e -> constantClicked(Math.PI / 6));
        addButton(buttonPanel, "2π", e -> constantClicked(2 * Math.PI));
        
        trigPanel.add(angleModePanel, BorderLayout.NORTH);
        trigPanel.add(buttonPanel, BorderLayout.CENTER);
        
        functionTabs.addTab("Trigonometric", trigPanel);
    }
    
    private void createStatisticsUI() {
        JPanel statsPanel = new JPanel(new BorderLayout());
        
        JTextArea dataInput = new JTextArea(5, 20);
        dataInput.setLineWrap(true);
        dataInput.setWrapStyleWord(true);
        JScrollPane scrollPane = new JScrollPane(dataInput);
        dataInput.setFont(new Font(FONT_NAME, Font.PLAIN, 14));
        dataInput.setToolTipText("Enter data values separated by commas");
        
        JPanel buttonPanel = new JPanel(new GridLayout(3, 3, 5, 5));
        
        addButton(buttonPanel, "Mean", e -> calculateStatistic(dataInput.getText(), this::calculateMean));
        addButton(buttonPanel, "Median", e -> calculateStatistic(dataInput.getText(), this::calculateMedian));
        addButton(buttonPanel, "Mode", e -> calculateStatistic(dataInput.getText(), this::calculateMode));
        addButton(buttonPanel, "Std Dev", e -> calculateStatistic(dataInput.getText(), this::calculateStdDev));
        addButton(buttonPanel, "Variance", e -> calculateStatistic(dataInput.getText(), this::calculateVariance));
        addButton(buttonPanel, "Sum", e -> calculateStatistic(dataInput.getText(), this::calculateSum));
        addButton(buttonPanel, "Min", e -> calculateStatistic(dataInput.getText(), this::calculateMin));
        addButton(buttonPanel, "Max", e -> calculateStatistic(dataInput.getText(), this::calculateMax));
        addButton(buttonPanel, "Count", e -> calculateStatistic(dataInput.getText(), this::calculateCount));
        
        JPanel instructionPanel = new JPanel();
        instructionPanel.add(new JLabel("Enter comma-separated values:"));
        
        statsPanel.add(instructionPanel, BorderLayout.NORTH);
        statsPanel.add(scrollPane, BorderLayout.CENTER);
        statsPanel.add(buttonPanel, BorderLayout.SOUTH);
        
        functionTabs.addTab("Statistics", statsPanel);
    }
    
    private void createConversionUI() {
        JPanel conversionPanel = new JPanel(new BorderLayout());
        
        String[] categories = {
            "Length", "Weight/Mass", "Temperature", "Area", "Volume", 
            "Time", "Speed", "Pressure", "Energy", "Power"
        };
        
        JComboBox<String> categorySelector = new JComboBox<>(categories);
        JComboBox<String> fromUnitSelector = new JComboBox<>();
        JComboBox<String> toUnitSelector = new JComboBox<>();
        
        JTextField fromValue = new JTextField(10);
        JTextField toValue = new JTextField(10);
        toValue.setEditable(false);
        
        JButton convertButton = new JButton("Convert");
        
        // Set up the length units initially
        String[] lengthUnits = {"Meter", "Kilometer", "Centimeter", "Millimeter", "Mile", "Yard", "Foot", "Inch"};
        for (String unit : lengthUnits) {
            fromUnitSelector.addItem(unit);
            toUnitSelector.addItem(unit);
        }
        
        // Category change listener
        categorySelector.addActionListener(e -> {
            fromUnitSelector.removeAllItems();
            toUnitSelector.removeAllItems();
            
            String[] units;
            switch (categorySelector.getSelectedItem().toString()) {
                case "Length":
                    units = lengthUnits;
                    break;
                case "Weight/Mass":
                    units = new String[]{"Kilogram", "Gram", "Milligram", "Pound", "Ounce", "Ton"};
                    break;
                case "Temperature":
                    units = new String[]{"Celsius", "Fahrenheit", "Kelvin"};
                    break;
                case "Area":
                    units = new String[]{"Square Meter", "Square Kilometer", "Square Centimeter", "Square Millimeter", "Square Mile", "Square Yard", "Square Foot", "Square Inch", "Acre", "Hectare"};
                    break;
                case "Volume":
                    units = new String[]{"Cubic Meter", "Cubic Centimeter", "Liter", "Milliliter", "Gallon", "Quart", "Pint", "Cup", "Fluid Ounce"};
                    break;
                case "Time":
                    units = new String[]{"Second", "Minute", "Hour", "Day", "Week", "Month", "Year"};
                    break;
                case "Speed":
                    units = new String[]{"Meter/Second", "Kilometer/Hour", "Mile/Hour", "Knot", "Foot/Second"};
                    break;
                case "Pressure":
                    units = new String[]{"Pascal", "Kilopascal", "Bar", "PSI", "Atmosphere", "Torr"};
                    break;
                case "Energy":
                    units = new String[]{"Joule", "Kilojoule", "Calorie", "Kilocalorie", "Watt-hour", "Kilowatt-hour", "Electron-volt", "BTU"};
                    break;
                case "Power":
                    units = new String[]{"Watt", "Kilowatt", "Horsepower", "BTU/hour"};
                    break;
                default:
                    units = new String[]{};
            }
            
            for (String unit : units) {
                fromUnitSelector.addItem(unit);
                toUnitSelector.addItem(unit);
            }
        });
        
        // Convert button action
        convertButton.addActionListener(e -> {
            try {
                double value = Double.parseDouble(fromValue.getText());
                String category = categorySelector.getSelectedItem().toString();
                String fromUnit = fromUnitSelector.getSelectedItem().toString();
                String toUnit = toUnitSelector.getSelectedItem().toString();
                
                double result = convert(value, category, fromUnit, toUnit);
                toValue.setText(df.format(result));
            } catch (NumberFormatException ex) {
                toValue.setText("Error");
            } catch (Exception ex) {
                toValue.setText("Conversion error");
            }
        });
        
        // Layout components
        JPanel topPanel = new JPanel(new FlowLayout());
        topPanel.add(new JLabel("Category:"));
        topPanel.add(categorySelector);
        
        JPanel centerPanel = new JPanel(new GridLayout(2, 3, 5, 5));
        centerPanel.add(new JLabel("From:"));
        centerPanel.add(fromUnitSelector);
        centerPanel.add(fromValue);
        centerPanel.add(new JLabel("To:"));
        centerPanel.add(toUnitSelector);
        centerPanel.add(toValue);
        
        JPanel bottomPanel = new JPanel();
        bottomPanel.add(convertButton);
        
        conversionPanel.add(topPanel, BorderLayout.NORTH);
        conversionPanel.add(centerPanel, BorderLayout.CENTER);
        conversionPanel.add(bottomPanel, BorderLayout.SOUTH);
        
        functionTabs.addTab("Conversions", conversionPanel);
    }
    
    private void addButton(JPanel panel, String text, ActionListener listener) {
        JButton button = new JButton(text);
        button.addActionListener(listener);
        button.setFont(new Font(FONT_NAME, Font.PLAIN, 14));
        panel.add(button);
    }
    
    // Button click handlers
    private void digitClicked(ActionEvent e) {
        JButton button = (JButton) e.getSource();
        String digit = button.getText();
        
        if (waitingForOperand) {
            display.setText(digit);
            waitingForOperand = false;
        } else {
            display.setText(display.getText() + digit);
        }
    }
    
    private void pointClicked() {
        if (waitingForOperand) {
            display.setText("0.");
            waitingForOperand = false;
        } else if (!display.getText().contains(".")) {
            display.setText(display.getText() + ".");
        }
    }
    
    private void unaryOperatorClicked(ActionEvent e) {
        JButton button = (JButton) e.getSource();
        String operation = button.getText();
        
        applyUnaryOperator(operation);
    }
    
    private void applyUnaryOperator(String operation) {
        try {
            double operand = Double.parseDouble(display.getText());
            Function<Double, Double> function = unaryFunctions.get(operation);
            
            if (function != null) {
                double result = function.apply(operand);
                historyDisplay.setText(operation + "(" + df.format(operand) + ") = ");
                display.setText(df.format(result));
                waitingForOperand = true;
            }
        } catch (Exception ex) {
            abortOperation();
        }
    }
    
    private void applyUnaryOperator(Function<Double, Double> function) {
        try {
            double operand = Double.parseDouble(display.getText());
            double result = function.apply(operand);
            display.setText(df.format(result));
            waitingForOperand = true;
        } catch (Exception ex) {
            abortOperation();
        }
    }
    
    private void binaryOperatorClicked(ActionEvent e) {
        JButton button = (JButton) e.getSource();
        String operation = button.getText();
        
        applyBinaryOperator(operation);
    }
    
    private void applyBinaryOperator(String operation) {
        try {
            double operand = Double.parseDouble(display.getText());
            
            if (!pendingOperation.isEmpty()) {
                if (!waitingForOperand) {
                    double result = calculate(operand);
                    display.setText(df.format(result));
                    operand = result;
                }
            }
            
            lastNumber = operand;
            historyDisplay.setText(df.format(operand) + " " + operation + " ");
            pendingOperation = operation;
            waitingForOperand = true;
        } catch (Exception ex) {
            abortOperation();
        }
    }
    
    private void equalClicked() {
        try {
            if (pendingOperation.isEmpty()) {
                return;
            }
            
            double operand = Double.parseDouble(display.getText());
            double result = calculate(operand);
            
            historyDisplay.setText(historyDisplay.getText() + df.format(operand) + " = ");
            display.setText(df.format(result));
            
            pendingOperation = "";
            waitingForOperand = true;
        } catch (Exception ex) {
            abortOperation();
        }
    }
    
    private double calculate(double rightOperand) {
        BiFunction<Double, Double, Double> function = binaryFunctions.get(pendingOperation);
        
        if (function != null) {
            return function.apply(lastNumber, rightOperand);
        }
        
        return rightOperand;
    }
    
    private void changeSignClicked() {
        String text = display.getText();
        if (text.startsWith("-")) {
            display.setText(text.substring(1));
        } else if (!text.equals("0")) {
            display.setText("-" + text);
        }
    }
    
    private void backspaceClicked() {
        String text = display.getText();
        if (!waitingForOperand && text.length() > 0) {
            display.setText(text.substring(0, text.length() - 1));
            if (display.getText().isEmpty() || display.getText().equals("-")) {
                display.setText("0");
                waitingForOperand = true;
            }
        }
    }
    
    private void clear() {
        display.setText("0");
        waitingForOperand = true;
    }
    
    private void clearAll() {
        display.setText("0");
        historyDisplay.setText("");
        pendingOperation = "";
        lastNumber = 0.0;
        waitingForOperand = true;
    }
    
    private void clearMemory() {
        memoryValue = 0.0;
    }
    
    private void readMemory() {
        display.setText(df.format(memoryValue));
        waitingForOperand = true;
    }
    
    private void setMemory() {
        try {
            memoryValue = Double.parseDouble(display.getText());
            waitingForOperand = true;
        } catch (Exception ex) {
            abortOperation();
        }
    }
    
    private void addToMemory() {
        try {
            memoryValue += Double.parseDouble(display.getText());
            waitingForOperand = true;
        } catch (Exception ex) {
            abortOperation();
        }
    }
    
    private void constantClicked(double value) {
        display.setText(df.format(value));
        waitingForOperand = true;
    }
    
    // Statistical functions
    private void calculateStatistic(String data, Function<double[], Double> statFunction) {
        try {
            double[] values = parseDataInput(data);
            if (values.length == 0) {
                display.setText("No data");
                return;
            }
            
            double result = statFunction.apply(values);
            display.setText(df.format(result));
            waitingForOperand = true;
        } catch (Exception ex) {
            display.setText("Error");
        }
    }
    
    private double[] parseDataInput(String data) {
        String[] parts = data.split(",");
        double[] values = new double[parts.length];
        
        for (int i = 0; i < parts.length; i++) {
            values[i] = Double.parseDouble(parts[i].trim());
        }
        
        return values;
    }
    
    private double calculateMean(double[] values) {
        double sum = 0;
        for (double value : values) {
            sum += value;
        }
        return sum / values.length;
    }
    
    private double calculateMedian(double[] values) {
        Arrays.sort(values);
        int middle = values.length / 2;
        if (values.length % 2 == 0) {
            return (values[middle-1] + values[middle]) / 2.0;
        } else {
            return values[middle];
        }
    }
    
    private double calculateMode(double[] values) {
        Map<Double, Integer> countMap = new HashMap<>();
        for (double value : values) {
            countMap.put(value, countMap.getOrDefault(value, 0) + 1);
        }
        
        double mode = 0;
        int maxCount = 0;
        for (Map.Entry<Double, Integer> entry : countMap.entrySet()) {
            if (entry.getValue() > maxCount) {
                maxCount = entry.getValue();
                mode = entry.getKey();
            }
        }
        
        return mode;
    }
    
    private double calculateStdDev(double[] values) {
        double mean = calculateMean(values);
        double sumSquaredDiff = 0;
        
        for (double value : values) {
            double diff = value - mean;
            sumSquaredDiff += diff * diff;
        }
        
        return Math.sqrt(sumSquaredDiff / values.length);
    }
    
    private double calculateVariance(double[] values) {
        double stdDev = calculateStdDev(values);
        return stdDev * stdDev;
    }
    
    private double calculateSum(double[] values) {
        double sum = 0;
        for (double value : values) {
            sum += value;
        }
        return sum;
    }
    
    private double calculateMin(double[] values) {
        double min = values[0];
        for (double value : values) {
            if (value < min) {
                min = value;
            }
        }
        return min;
    }
    
    private double calculateMax(double[] values) {
        double max = values[0];
        for (double value : values) {
            if (value > max) {
                max = value;
            }
        }
        return max;
    }
    
    private double calculateCount(double[] values) {
        return values.length;
    }
    
    // Unit conversion
    private double convert(double value, String category, String fromUnit, String toUnit) {
        if (fromUnit.equals(toUnit)) {
            return value;
        }
        
        // Convert to base unit first
        double baseValue = convertToBaseUnit(value, category, fromUnit);
        
        // Then convert from base unit to target unit
        return convertFromBaseUnit(baseValue, category, toUnit);
    }
    
    private double convertToBaseUnit(double value, String category, String unit) {
        switch (category) {
            case "Length":
                // Base unit: Meter
                switch (unit) {
                    case "Meter": return value;
                    case "Kilometer": return value * 1000;
                    case "Centimeter": return value * 0.01;
                    case "Millimeter": return value * 0.001;
                    case "Mile": return value * 1609.344;
                    case "Yard": return value * 0.9144;
                    case "Foot": return value * 0.3048;
                    case "Inch": return value * 0.0254;
                }
                break;
                
            case "Weight/Mass":
                // Base unit: Kilogram
                switch (unit) {
                    case "Kilogram": return value;
                    case "Gram": return value * 0.001;
                    case "Milligram": return value * 0.000001;
                    case "Pound": return value * 0.45359237;
                    case "Ounce": return value * 0.028349523125;
                    case "Ton": return value * 1000;
                }
                break;
                
            case "Temperature":
                // Base unit: Kelvin
                switch (unit) {
                    case "Kelvin": return value;
                    case "Celsius": return value + 273.15;
                    case "Fahrenheit": return (value - 32) * 5/9 + 273.15;
                }
                break;
                
            // Add other categories as needed
        }
        
        return value; // Default fallback
    }
    
    private double convertFromBaseUnit(double baseValue, String category, String unit) {
        switch (category) {
            case "Length":
                // Base unit: Meter
                switch (unit) {
                    case "Meter": return baseValue;
                    case "Kilometer": return baseValue / 1000;
                    case "Centimeter": return baseValue / 0.01;
                    case "Millimeter": return baseValue / 0.001;
                    case "Mile": return baseValue / 1609.344;
                    case "Yard": return baseValue / 0.9144;
                    case "Foot": return baseValue / 0.3048;
                    case "Inch": return baseValue / 0.0254;
                }
                break;
                
            case "Weight/Mass":
                // Base unit: Kilogram
                switch (unit) {
                    case "Kilogram": return baseValue;
                    case "Gram": return baseValue / 0.001;
                    case "Milligram": return baseValue / 0.000001;
                    case "Pound": return baseValue / 0.45359237;
                    case "Ounce": return baseValue / 0.028349523125;
                    case "Ton": return baseValue / 1000;
                }
                break;
                
            case "Temperature":
                // Base unit: Kelvin
                switch (unit) {
                    case "Kelvin": return baseValue;
                    case "Celsius": return baseValue - 273.15;
                    case "Fahrenheit": return (baseValue - 273.15) * 9/5 + 32;
                }
                break;
                
            // Add other categories as needed
        }
        
        return baseValue; // Default fallback
    }
    
    private void abortOperation() {
        display.setText("Error");
        waitingForOperand = true;
    }
    
    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            ScientificCalculator calculator = new ScientificCalculator();
            calculator.setVisible(true);
        });
    }
}