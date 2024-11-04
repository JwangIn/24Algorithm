#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

#define INF 9999

using namespace std;

// 최소 신장 트리 (minimum spanning tree)

namespace InputWeight
{
	vector<pair<pair<int,int>,int>> edges;

	void Show1()
	{
		// a-b 10 make_pair<int,int> [i].first, [i].second

		edges.push_back({ {1,2},10 });
		edges.push_back({ {1,3},15 });
		edges.push_back({ {2,3},5 });
		edges.push_back({ {2,4},18 });
		edges.push_back({ {3,4},25 });

		for (const auto& edge : edges)
		{
			cout << "Edge : (" << edge.first.first << "," << edge.first.second << "), Weight : "
				<< edge.second << endl;
		}
		cout << endl;
	}
	
	class Edge
	{
	private:
		int node[2]; // node[0] : a, node[1] : b
		int distance;

	public:
		Edge(int node1, int node2, int _distance)
		{
			node[0] = node1;
			node[1] = node2;
			distance = _distance;
		}
		int first_node() const { return this->node[0]; }
		int second_node() const { return this->node[1]; }
		int getDistance() const { return this->distance; }

		// 연산자 오버로딩
		bool operator <(Edge& edge)
		{
			return this->distance < edge.distance;
		}

	};

	void Show2()
	{
		vector<Edge> edges;

		edges.push_back(Edge(1, 2, 10));
		edges.push_back(Edge(1, 3, 15));
		edges.push_back(Edge(2, 3, 5));
		edges.push_back(Edge(2, 4, 18));
		edges.push_back(Edge(3, 4, 25));

		for (const auto& edge : edges)
		{
			cout << "Edge : (" << edge.first_node() << "," << edge.second_node() << "), Weight : "
				<< edge.getDistance() << endl;
		}

		sort(edges.begin(), edges.end());
		cout << endl;
		for (const auto& edge : edges)
		{
			cout << "Edge : (" << edge.first_node() << "," << edge.second_node() << "), Weight : "
				<< edge.getDistance() << endl;
		}
	}
	



}

namespace InputGraph
{
	// 그래프를 코드로 표현하는 방법

	// 1. Matrix 2.

	void Show001()
	{
		int size = 7;

		int graph[7][7] =
		{
			{0,67,INF ,28,17,INF,12},
			{67,0,INF,24,62,INF,INF},
			{INF,INF,0,INF,20,37,INF},
			{28,24,INF,0,INF,INF,13},
			{17,62,20,INF,0,45,73},
			{INF,INF,37,INF,45,0,INF},
			{12,INF,INF,13,73,INF,0}
		};


		for (int i = 0; i < 7; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				cout << graph[i][j] << ' ';
			}
			cout << '\n';
		}


	}




}

namespace Union_Find
{
	int getParent(int arr[],int x) // 그래프를 주어졌을 때 루트노드(부모노드)를 찾는 함수
	{
		if (x = arr[x]) return x;

		return getParent(arr, arr[x]);
	}

	void Union(int arr[],int a,int b) // 두개의 그래프를 하나로 합친다.
	{
		a = getParent(arr, a);
		b = getParent(arr, b);

		if (a < b) arr[b] = a;
		else
		{
			arr[a] = b;
		}

	}

	bool findParent(int arr[],int a,int b) // 같은지 아닌지
	{
		a = getParent(arr, a);
		b = getParent(arr, b);
				
		if (a == b) return true;
		else
		{
			return false;
		}

	}






}
