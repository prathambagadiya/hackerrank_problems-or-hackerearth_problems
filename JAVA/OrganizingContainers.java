import java.util.HashSet;
import java.util.Set;

public class OrganizingContainers {

    public String organizingContainers(int[][] matrix) {
        int n = matrix.length;
        Set<Integer> containers = new HashSet<>();
        Set<Integer> balls = new HashSet<>();
        for (int i = 0; i < n; i++) {
            int rowSum = 0;
            int colSum = 0;
            for (int j = 0; j < n; j++) {
                rowSum += matrix[i][j];
                colSum += matrix[j][i];
            }
            balls.add(colSum);
            containers.add(rowSum);
        }

        return containers.equals(balls) ? "Possible" : "Impossible";

    }
}
