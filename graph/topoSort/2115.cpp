#include <bits/stdc++.h>
using namespace std;

vector<string> findAllRecipes(vector<string>& recipes,
                              vector<vector<string>>& ingredients,
                              vector<string>& supplies) {

    unordered_map<string, vector<string>> adj;
    unordered_map<string, int> indegree;

    // Build Graph
    for (int i = 0; i < recipes.size(); i++) {

        indegree[recipes[i]] = ingredients[i].size();

        for (auto ingredient : ingredients[i]) {
            adj[ingredient].push_back(recipes[i]);
        }
    }

    // Initialize Queue
    queue<string> q;

    for (auto supply : supplies)
        q.push(supply);

    vector<string> ans;

    // Kahn's Algorithm
    while (!q.empty()) {

        string node = q.front();
        q.pop();

        for (auto recipe : adj[node]) {

            indegree[recipe]--;

            if (indegree[recipe] == 0) {

                ans.push_back(recipe);

                // Recipe becomes a new supply
                q.push(recipe);
            }
        }
    }

    return ans;
}

int main() {

    vector<string> recipes = {
        "bread",
        "sandwich"
    };

    vector<vector<string>> ingredients = {
        {"flour", "yeast"},
        {"bread", "meat"}
    };

    vector<string> supplies = {
        "flour",
        "yeast",
        "meat"
    };

    vector<string> ans = findAllRecipes(recipes, ingredients, supplies);

    for (auto i : ans)
        cout << i << " ";

    return 0;
}