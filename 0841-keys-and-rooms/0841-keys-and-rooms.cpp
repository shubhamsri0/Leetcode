class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        queue<int>q;
        vector<bool>visited(n,false);

        q.push(0);
        visited[0] = true;

        while(!q.empty()) {
            int room = q.front();
            q.pop();

            for(auto key : rooms[room]) {
                if(!visited[key]) {
                    visited[key] = true;
                    q.push(key);
                }
            }
        }

        for(auto i : visited) {
            if(!i) return false;
        }

        return true;
    }
};