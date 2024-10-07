package graphs;

import java.util.*;

public class DfsTraversal {

	public static void dfs(int node, boolean visited[], ArrayList<ArrayList<Integer>> adj, ArrayList<Integer> ls) {
		visited[node] = true;
		ls.add(node);
		System.out.print(node + " ");
		for (Integer i : adj.get(node)) {
			if (visited[i] == false) {
				dfs(i, visited, adj, ls);
			}
		}
	}

	public static ArrayList<Integer> dfsOfGraph(int v, ArrayList<ArrayList<Integer>> adj) {
		boolean visited[] = new boolean[v + 1];
		visited[0] = true;
		ArrayList<Integer> ls = new ArrayList<>();
		dfs(0, visited, adj, ls);
		return ls;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n = 5;
		ArrayList<ArrayList<Integer>> adj = new ArrayList<>(n);

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

		dfsOfGraph(n, adj);
	}

}
