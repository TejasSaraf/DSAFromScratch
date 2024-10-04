package graphs;

import java.util.Scanner;

public class Graph_Implementation_AdjacenyMatrix {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n, m;

		Scanner input = new Scanner(System.in);

		System.out.println("Enter number of nodes: ");
		n = input.nextInt();

		System.out.println("Enter number of Edges: ");
		m = input.nextInt();

		int[][] adj = new int[n + 1][n + 1];

		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= n; j++) {
				adj[i][j] = 0;
			}
		}

		for (int i = 0; i < m; i++) {
			int x, y;
			x = input.nextInt();
			y = input.nextInt();

			adj[x][y] = 1;
			adj[y][x] = 1;
		}

		for (int i = 0; i <= n; i++) {
			System.out.print(i + " ");
			for (int j = 0; j <= n; j++) {
				System.out.print(adj[i][j] + " ");
			}
			System.out.println();
		}
		input.close();

	}

}
