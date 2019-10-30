import java.util.*;
import java.util.function.Function;

public class QueensAttack {

    public int queensAttack(int n, int k, int rq, int cq, int[][] obstacles) {

        Map<Integer, Set<Integer>> obstacle = new HashMap<>();

        for (int[] el : obstacles) {
            obstacle.computeIfAbsent(el[0], k1 -> new HashSet<>()).add(el[1]);
        }

        int sum = 0;

        sum += iterate(rq, cq, x -> x + 1, x -> x + 1, obstacle, n);
        sum += iterate(rq, cq, x -> x + 1, x -> x - 1, obstacle, n);
        sum += iterate(rq, cq, x -> x - 1, x -> x + 1, obstacle, n);
        sum += iterate(rq, cq, x -> x - 1, x -> x - 1, obstacle, n);
        sum += iterate(rq, cq, x -> x + 1, x -> x, obstacle, n);
        sum += iterate(rq, cq, x -> x - 1, x -> x, obstacle, n);
        sum += iterate(rq, cq, x -> x, x -> x + 1, obstacle, n);
        sum += iterate(rq, cq, x -> x, x -> x - 1, obstacle, n);

        return sum;
    }


    private int iterate(int x, int y, Function<Integer, Integer> left, Function<Integer, Integer> right, Map<Integer, Set<Integer>> obstacles, int n) {

        int sum = 0;
        boolean next;

        do {

            x = left.apply(x);
            y = right.apply(y);

            next = x <= n && y <= n && x >= 1 && y >= 1;

            if (next) {
                Set<Integer> obstacle = obstacles.getOrDefault(x, Collections.emptySet());
                if (!obstacle.isEmpty() && obstacle.contains(y)) {
                    break;
                }
                sum++;

            }

        } while (next);

        return sum;
    }

}