class Solution {
    public String smallestEquivalentString(String s1, String s2, String baseStr) {
        int[] parent = new int[26];
        for(int i = 0; i < parent.length; i++) {
            parent[i] = i;
        }
        for(int i = 0; i < s1.length(); i++) {
            int c1 = s1.charAt(i) - 'a';
            int c2 = s2.charAt(i) - 'a';
            union(parent, c1, c2);
        }
        StringBuilder sb = new StringBuilder();
        for(int i = 0; i < baseStr.length(); i++) {
            int c = baseStr.charAt(i) - 'a';
            sb.append((char)(find(parent, c) + 'a'));
        }
        return sb.toString();
    }

    private void union(int[] parent, int a, int b) {
        int pa = find(parent, a);
        int pb = find(parent, b);
        if(pb >= pa) {
            parent[find(parent, b)] = parent[find(parent, a)];
        } else {
            parent[find(parent, a)] = parent[find(parent, b)];
        }
    }

    private int find(int[] parent, int a) {
        if(a != parent[a]) {
            parent[a] = find(parent, parent[a]);
        }
        return parent[a];
        
    }
}
