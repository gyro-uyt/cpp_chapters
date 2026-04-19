import sys
from PyQt5.QtWidgets import QApplication, QMainWindow, QLabel
from PyQt5.QtGui import QPixmap


class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setGeometry(1000, 500, 16 * 40, 9 * 40)  # (x, y, width, height)

        label = QLabel(self)
        label.setGeometry(0, 0, 16 * 30, 9 * 30)  # image's geometry

        pixmap = QPixmap("morioh.png")
        label.setPixmap(pixmap)

        label.setScaledContents(True)

        # positioning the image

        ## center
        label.setGeometry(
            (self.width() - label.width()) // 2,
            (self.height() - label.height()) // 2,
            label.width(),
            label.height(),
        )

        ## bottom-right
        # label.setGeometry(
        #     self.width() - label.width(),
        #     self.height() - label.height(),
        #     label.width(),
        #     label.height(),
        # )

        ## bottom-left
        # label.setGeometry(
        #     0,
        #     self.height() - label.height(),
        #     label.width(),
        #     label.height(),
        # )

        ## top-right
        # label.setGeometry(
        #     self.width() - label.width(),
        #     0,
        #     label.width(),
        #     label.height(),
        # )

        ## top-left
        # label.setGeometry(
        #     0,
        #     0,
        #     label.width(),
        #     label.height(),
        # )


def main():
    app = QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec_())


if __name__ == "__main__":
    main()
