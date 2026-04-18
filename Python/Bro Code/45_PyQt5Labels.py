# pip install PyQt5

import sys
from PyQt5.QtWidgets import QApplication, QMainWindow, QLabel
from PyQt5.QtGui import QIcon, QFont
from PyQt5.QtCore import Qt


class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("My cool first GUI")
        self.setGeometry(1000, 500, 600, 400)  # (x, y, width, height)
        self.setWindowIcon(QIcon("favicon.ico"))

        label = QLabel("Hello, Hero", self)  # self refers to window
        label.setFont(QFont("Sitka Display", 30))
        label.setGeometry(0, 0, 500, 100)

        # css type syntax
        # Note: each attribute should end with ';'
        label.setStyleSheet(
            "color: #65bcff;"
            "background-color: black;"
            "font-weight: bold;"
            "font-style: italic;"
            "text-decoration: underline; "
        )

        # label.setAlignment(Qt.AlignTop) # Vertically Top
        # label.setAlignment(Qt.AlignVCenter) # Vertically Center (default)
        # label.setAlignment(Qt.AlignBottom)  # Vertically Bottom

        # label.setAlignment(Qt.AlignRight) # Horizontally Right
        # label.setAlignment(Qt.AlignHCenter) # Horizontally Center
        # label.setAlignment(Qt.AlignLeft) # Horizontally Left

        # combining
        # label.setAlignment(Qt.AlignHCenter | Qt.AlignTop)  # Center & Top
        # label.setAlignment(Qt.AlignHCenter | Qt.AlignBottom)  # Center & Bottom
        # label.setAlignment(Qt.AlignHCenter | Qt.AlignVCenter)  # Center & Center
        label.setAlignment(Qt.AlignCenter)  # Center & Center (short-cut)


def main():
    app = QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec_())


if __name__ == "__main__":
    main()
