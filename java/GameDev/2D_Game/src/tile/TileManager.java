package tile;

import main.GamePanel;

import javax.imageio.ImageIO;
import java.awt.*;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.Objects;

public class TileManager {

    GamePanel gp;
    Tile[] tile;
    int[][] mapTileNumber;

    public TileManager(GamePanel gp) {

        this.gp = gp;

        tile = new Tile[10];    // we created 10 different types of tile e.g. water, wall, grass, etc.
        mapTileNumber = new int[gp.maxScreenCol][gp.maxScreenRow];

        getTileImage();
        loadMap("/maps/map01.txt");
    }

    public void getTileImage() {
        try {

            tile[0] = new Tile();
            // NOTE: removing the '/' from the start of the file name the path will now be relative to the resources' directory.
            tile[0].image = ImageIO.read(Objects.requireNonNull(getClass().getClassLoader().getResourceAsStream("tiles/grass.png")));
//            If the resource is not found, and you use Objects.requireNonNull(), it will throw an IllegalArgumentException, and you'll get a clear error message telling you which resource is missing
            tile[1] = new Tile();
            tile[1].image = ImageIO.read(Objects.requireNonNull(getClass().getClassLoader().getResourceAsStream("tiles/wall.png")));
            tile[2] = new Tile();
            tile[2].image = ImageIO.read(Objects.requireNonNull(getClass().getClassLoader().getResourceAsStream("tiles/water.png")));

        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    // method to load map from a txt file
    public void loadMap(String filePath) {
        try {
            InputStream is = getClass().getResourceAsStream(filePath);
            BufferedReader br = new BufferedReader(new InputStreamReader(is));

            int col = 0, row = 0;

            while (col < gp.maxScreenCol && row < gp.maxScreenRow) {

                String line = br.readLine();    // read a line of text
                while (col < gp.maxScreenCol) {
                    // This "line.split(" ")" means the program splits the line where space is inserted so you can split them and put them individually into the array. If no space is inserted in the map file, the program cannot render your map correctly.
                    //
                    //Basically, you can use any symbol for splitting lines. Space is just one way to handle it.
                    //
                    //Another example:
                    //String numbers[] = line.split("&");
                    //(Then insert  &  between numbers in the map file)
                    String[] numbers = line.split(" ");    // Splits this string around matches of the given regular expression
                    int number = Integer.parseInt(numbers[col]);    // use col as an index for numbers[] array

                    mapTileNumber[col][row] = number;   // we store the Extracted numbers in the mapTileNumber[][]
                    col++;  // Continues this until everything in the numbers[] is stored in the mapTileNumber[][]
                }
                if (col == gp.maxScreenCol) {
                    col = 0;
                    row++;
                }
            }
            br.close();
        } catch (Exception e) {

        }
    }

    public void draw(Graphics2D g2) {

        int x = 0, y = 0;
        int row = 0, col = 0;

        while (col < gp.maxScreenCol && row < gp.maxScreenRow) {

            int tileNumber = mapTileNumber[col][row];   // Extract a tile number which is stored in mapTileNumber[0][0]
            g2.drawImage(tile[tileNumber].image, x, y, gp.tileSize, gp.tileSize, null);
            col++;
            x += gp.tileSize;

            if (col == gp.maxScreenCol) {
                col = 0;
                x = 0;
                row++;
                y += gp.tileSize;
            }
        }
    }
}
