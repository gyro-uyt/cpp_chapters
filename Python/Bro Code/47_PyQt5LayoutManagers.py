import sys
from PyQt5.QtWidgets import (
    QApplication,
    QMainWindow,
    QLabel,
    QWidget,
    QVBoxLayout,
    QHBoxLayout,
    QGridLayout,
)


class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setGeometry(1000, 500, 600, 400)  # (x, y, width, height)
        self.initUI() 

    def initUI(self):
        pass


def main():
    app = QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec_())


if __name__ == "__main__":
    main()
