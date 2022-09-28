import java.util.*;
import java.lang.*;
import java.io.*;

class Kadane_Algorithm {
	public static void main(String[] args) throws java.lang.Exception {

		int a[] = { 2, -4, 3, -1, 2, 4, -5, -8 };
		int local_max = 0;
		int global_max = Integer.MIN_VALUE;
		int n = a.length;

		for (int i = 0; i < n; i++) {
			local_max = Math.max(a[i], a[i] + local_max);

			if (local_max > global_max) {
				global_max = local_max;
			}
		}
		System.out.println(global_max);
	}
}
