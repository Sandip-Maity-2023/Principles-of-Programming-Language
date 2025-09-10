//
// Created by 12san on 29-08-2025.
//
#include <bits/stdc++.h>
using namespace std;

struct State {
    int x, y, o, steps; // x,y = top-left cell, o = orientation, steps = moves so far
};

int M, N;
vector<vector<char>> grid;

bool is_free(int x, int y) {
    return (x >= 0 && x < M && y >= 0 && y < N && grid[x][y] != 'H');
}

int sofa_problem() {
    vector<pair<int,int>> start, target;

    // Find start and target positions
    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            if(grid[i][j] == 's') start.push_back({i,j});
            if(grid[i][j] == 'S') target.push_back({i,j});
        }
    }

    // Determine start orientation
    int sx, sy, so;
    if(start[0].first == start[1].first) { // same row → horizontal
        so = 0;
        sx = start[0].first;
        sy = min(start[0].second, start[1].second);
    } else { // vertical
        so = 1;
        sx = min(start[0].first, start[1].first);
        sy = start[0].second;
    }

    // Determine target orientation
    int tx, ty, to;
    if(target[0].first == target[1].first) {
        to = 0;
        tx = target[0].first;
        ty = min(target[0].second, target[1].second);
    } else {
        to = 1;
        tx = min(target[0].first, target[1].first);
        ty = target[0].second;
    }

    // BFS
    queue<State> q;
    vector<vector<vector<bool>>> visited(M, vector<vector<bool>>(N, vector<bool>(2,false)));
    q.push({sx, sy, so, 0});
    visited[sx][sy][so] = true;

    while(!q.empty()) {
        State cur = q.front(); q.pop();

        // Goal check
        if(cur.x == tx && cur.y == ty && cur.o == to)
            return cur.steps;

        if(cur.o == 0) { // Horizontal
            // Move left
            if(cur.y-1 >= 0 && is_free(cur.x, cur.y-1)) {
                if(!visited[cur.x][cur.y-1][0]) {
                    visited[cur.x][cur.y-1][0] = true;
                    q.push({cur.x, cur.y-1, 0, cur.steps+1});
                }
            }
            // Move right
            if(cur.y+2 < N && is_free(cur.x, cur.y+2)) {
                if(!visited[cur.x][cur.y+1][0]) {
                    visited[cur.x][cur.y+1][0] = true;
                    q.push({cur.x, cur.y+1, 0, cur.steps+1});
                }
            }
            // Move up
            if(cur.x-1 >= 0 && is_free(cur.x-1, cur.y) && is_free(cur.x-1, cur.y+1)) {
                if(!visited[cur.x-1][cur.y][0]) {
                    visited[cur.x-1][cur.y][0] = true;
                    q.push({cur.x-1, cur.y, 0, cur.steps+1});
                }
            }
            // Move down
            if(cur.x+1 < M && is_free(cur.x+1, cur.y) && is_free(cur.x+1, cur.y+1)) {
                if(!visited[cur.x+1][cur.y][0]) {
                    visited[cur.x+1][cur.y][0] = true;
                    q.push({cur.x+1, cur.y, 0, cur.steps+1});
                }
            }
            // Rotate → vertical
            if(cur.x+1 < M &&
               is_free(cur.x,cur.y) && is_free(cur.x,cur.y+1) &&
               is_free(cur.x+1,cur.y) && is_free(cur.x+1,cur.y+1)) {
                if(!visited[cur.x][cur.y][1]) {
                    visited[cur.x][cur.y][1] = true;
                    q.push({cur.x, cur.y, 1, cur.steps+1});
                }
            }
        }
        else { // Vertical
            // Move up
            if(cur.x-1 >= 0 && is_free(cur.x-1,cur.y)) {
                if(!visited[cur.x-1][cur.y][1]) {
                    visited[cur.x-1][cur.y][1] = true;
                    q.push({cur.x-1, cur.y, 1, cur.steps+1});
                }
            }
            // Move down
            if(cur.x+2 < M && is_free(cur.x+2,cur.y)) {
                if(!visited[cur.x+1][cur.y][1]) {
                    visited[cur.x+1][cur.y][1] = true;
                    q.push({cur.x+1, cur.y, 1, cur.steps+1});
                }
            }
            // Move left
            if(cur.y-1 >= 0 && is_free(cur.x,cur.y-1) && is_free(cur.x+1,cur.y-1)) {
                if(!visited[cur.x][cur.y-1][1]) {
                    visited[cur.x][cur.y-1][1] = true;
                    q.push({cur.x, cur.y-1, 1, cur.steps+1});
                }
            }
            // Move right
            if(cur.y+1 < N && is_free(cur.x,cur.y+1) && is_free(cur.x+1,cur.y+1)) {
                if(!visited[cur.x][cur.y+1][1]) {
                    visited[cur.x][cur.y+1][1] = true;
                    q.push({cur.x, cur.y+1, 1, cur.steps+1});
                }
            }
            // Rotate → horizontal
            if(cur.y+1 < N &&
               is_free(cur.x,cur.y) && is_free(cur.x+1,cur.y) &&
               is_free(cur.x,cur.y+1) && is_free(cur.x+1,cur.y+1)) {
                if(!visited[cur.x][cur.y][0]) {
                    visited[cur.x][cur.y][0] = true;
                    q.push({cur.x, cur.y, 0, cur.steps+1});
                }
            }
        }
    }

    return -1; // Impossible
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> M >> N;
    grid.assign(M, vector<char>(N));
    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            cin >> grid[i][j];
        }
    }

    int ans = sofa_problem();
    if(ans == -1) cout << "Impossible\n";
    else cout << ans << "\n";

    return 0;
}
