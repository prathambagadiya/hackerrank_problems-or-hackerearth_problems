package com.hackerrank.learn;

import java.util.Scanner;

public class HourRank21Catch {

    static int whoGetsTheCatch(int n, int x, int[] X, int[] V){
        /*
        int numberOfCachers = n;
        int location = x;
        int[] catcherLocations = X;
        int[] catcherSpeeds = V;
        */

        int fastestCatcher = 0;
        float quickestTimeTaken = 1000000000;

        float timeTakenByCather;

        for (int i = 0; i < n; i++) {
            timeTakenByCather = findTime(X[i], x, V[i]);

            if (timeTakenByCather == quickestTimeTaken) {
                fastestCatcher = -1;
            }

            if (timeTakenByCather < quickestTimeTaken) {
                fastestCatcher = i ;
                quickestTimeTaken = timeTakenByCather;
            }
        }

        return fastestCatcher;
    }

    private static float findTime(int locationOfCatcher, int locationOfVenotoise, int speedOfCatcher) {
        return Math.abs(locationOfCatcher - locationOfVenotoise) / speedOfCatcher;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        //  Return the index of the catcher who gets the catch, or -1 if no one gets the catch.
        int n = in.nextInt();
        int x = in.nextInt();
        int[] X = new int[n];
        for(int X_i=0; X_i < n; X_i++){
            X[X_i] = in.nextInt();
        }
        int[] V = new int[n];
        for(int V_i=0; V_i < n; V_i++){
            V[V_i] = in.nextInt();
        }
        int result = whoGetsTheCatch(n, x, X, V);
        System.out.println(result);
    }
}
