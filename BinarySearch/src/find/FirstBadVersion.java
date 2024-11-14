/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

package find;

public class FirstBadVersion {
	public int firstBadVersion(int n) {
		int start = 0;
		int end = n;
		int ans = 0;

		while (start <= end) {
			int mid = start + (end - start) / 2;
			boolean bad = isBadVersion(mid);

			if (bad) {
				end = mid - 1;
				ans = mid;
			} else {
				start = mid + 1;
			}
		}
		return ans;
	}

}
