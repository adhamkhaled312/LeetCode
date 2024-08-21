class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> indegree(numCourses, 0);
        unordered_map<int, vector<int>> graph;

        for (const auto& prereq : prerequisites) {
            int p = prereq[1];
            int q = prereq[0];
            graph[p].push_back(q);
            indegree[q]++;
        }

        queue<int> q;
        for (int i = 0; i < numCourses; ++i) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }

        int count = 0;
        while (!q.empty()) {
            int course = q.front();
            q.pop();
            count++;

            if (graph.find(course) != graph.end()) {
                for (int nextCourse : graph[course]) {
                    indegree[nextCourse]--;
                    if (indegree[nextCourse] == 0) {
                        q.push(nextCourse);
                    }
                }
            }
        }

        return count == numCourses;
    }
};
