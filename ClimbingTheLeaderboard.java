import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

import static java.util.Collections.binarySearch;

public class ClimbingTheLeaderboard {

    public int[] climbingLeaderboard(int[] scores, int[] alice) {

        List<Integer> places = makePlaces(scores);


        int[] aliceScore = new int[alice.length];

        for (int i = 0; i < alice.length; i++) {

            int position = binarySearch(places, alice[i], Collections.reverseOrder());

            if (position < 0) {
                position *= -1;
            } else {
                position++;
            }

            aliceScore[i] = position;
        }

        return aliceScore;

    }

    private List<Integer> makePlaces(int[] scoreData) {


        if (scoreData.length == 1)
            return Collections.singletonList(scoreData[0]);

        Integer[] scores = Arrays.stream(scoreData).boxed().toArray(Integer[]::new);

        Arrays.sort(scores, Collections.reverseOrder());

        List<Integer> places = new ArrayList<>();

        int x = scores[0];

        for (int i = 1; i < scores.length; i++) {

            if (scores[i] != x) {
                places.add(x);
                x = scores[i];
            }

            if (i + 1 == scores.length) {
                places.add(scores[i]);
            }
        }
        return places;
    }
}