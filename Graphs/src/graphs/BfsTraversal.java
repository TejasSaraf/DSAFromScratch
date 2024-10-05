package graphs;

import java.util.*;

public class BfsTraversal {

	void bfsTraversal(int v, ArrayList<ArrayList<Integer>> adj) {
		ArrayList<Integer> bfs = new ArrayList<>();
		boolean visited[] = new boolean[v];
		Queue<Integer> q = new LinkedList<>();

		q.add(0);
		visited[0] = true;

		while (!q.isEmpty()) {
			Integer node = q.poll();
			System.out.print(node + " ");
			bfs.add(node);

			for (Integer i : adj.get(node)) {
				if (visited[i] == false) {
					visited[i] = true;
					q.add(i);
				}
			}
		}
	}

	public static void main(String[] args) {
		int n = 5;
		ArrayList<ArrayList<Integer>> adj = new ArrayList<>();

		for (int i = 0; i <= n; i++) {
			adj.add(new ArrayList<>());
		}

		adj.get(0).add(3);
		adj.get(3).add(0);

		adj.get(1).add(2);
		adj.get(2).add(1);

		adj.get(1).add(3);
		adj.get(3).add(1);

		adj.get(1).add(4);
		adj.get(4).add(1);

		BfsTraversal obj = new BfsTraversal();
		obj.bfsTraversal(n, adj);

	}

}
