class Solution {
    public String shortestBeautifulSubstring(String s, int k) {

        int low = 0;
        int count = 0;

        int bestLeft = -1;
        int bestLength = Integer.MAX_VALUE;

        for (int high = 0; high < s.length(); high++) {

            // Add right character
            if (s.charAt(high) == '1') {
                count++;
            }

            // Too many 1s -> shrink window
            while (count > k) {

                if (s.charAt(low) == '1') {
                    count--;
                }

                low++;
            }

            // Exactly k ones
            if (count == k) {

                // Remove unnecessary leading zeros
                while (s.charAt(low) == '0') {
                    low++;
                }

                int length = high - low + 1;

                if (length < bestLength) {

                    bestLength = length;
                    bestLeft = low;

                } else if (length == bestLength) {

                    String current = s.substring(low, high + 1);
                    String best = s.substring(
                        bestLeft,
                        bestLeft + bestLength
                    );

                    if (current.compareTo(best) < 0) {
                        bestLeft = low;
                    }
                }
            }
        }

        if (bestLeft == -1) {
            return "";
        }

        return s.substring(bestLeft, bestLeft + bestLength);
    }
}