package graphs;

import java.util.*;

public class graphAdjacencyList {

	public static void main(String[] args) {
		int n = 5;
		ArrayList<ArrayList<Integer>> adj = new ArrayList<>(n);

		for (int i = 0; i < n; i++) {
			adj.add(new ArrayList<>());
		}

		Scanner sc = new Scanner(System.in);

		System.out.println("Enter the number of edges:");
		int edges = sc.nextInt();

		System.out.println("Enter the edges (u v):");
		for (int i = 0; i < edges; i++) {
			int u = sc.nextInt();
			int v = sc.nextInt();

			if (u >= 0 && u < n && v >= 0 && v < n) {
				adj.get(u).add(v);
				adj.get(v).add(u);
			} else {
				System.out.println("Invalid edge: " + u + " " + v);
			}
		}

		sc.close();

		System.out.println("Adjacency lists:");
		for (int i = 0; i < adj.size(); i++) {
			System.out.print("Adjacency list of vertex " + i + ": ");
			for (int j = 0; j < adj.get(i).size(); j++) {
				System.out.print(adj.get(i).get(j) + " ");
			}
			System.out.println();
		}
	}
}
