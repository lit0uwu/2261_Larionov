public class main {
    public static void main(String[] args) {
        int x[][] = new int[10][10];

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                System.out.print(x[i][j]);
            }
        }
        System.out.println();

        circle: for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                if (x[i][j]==0) {
                    System.out.printf("%d %d%n", i, j);
                    break circle;
                }
            }
        }
    }
}
