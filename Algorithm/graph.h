#pragma once

#include <iostream>
#include <vector>

using namespace std;

namespace virus
{
	vector<vector<int>> graph(101);
	bool visited[101] = { false };


	int n, m; // n ��ǻ�� ��, m(��)�� ����
	int count = 0;

	void DFS(int node) // ���� ����� ��ǻ��(Vertex, node)
	{
		for (int i = 0; i<graph[node].size(); i++)
		{
			int current = graph[node][i];

			if (visited[current]) continue;

			visited[current] = true;
			count++;
			DFS(current);
		}


	}


	void Example01()
	{
		cin >> n >> m;

		for (int i = 0; i < m; i++)
		{
			int a, b;
			cin >> a >> b;	// ��ǻ��, ����

			graph[a].push_back(b);
			graph[b].push_back(a);
		}

		// ��ǻ�� 1 ����
		visited[1] = true;

		DFS(1);

		cout << count;
	}


}