#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// �ּ� ���� Ʈ�� (minimum spanning tree)

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

		// ������ �����ε�
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


namespace Union_Find
{
	int getParent(int arr[],int x) // �׷����� �־����� �� ��Ʈ���(�θ���)�� ã�� �Լ�
	{
		if (x = arr[x]) return x;

		return getParent(arr, arr[x]);
	}

	void Union(int arr[],int a,int b) // �ΰ��� �׷����� �ϳ��� ��ģ��.
	{
		a = getParent(arr, a);
		b = getParent(arr, b);

		if (a < b) arr[b] = a;
		else
		{
			arr[a] = b;
		}

	}

	bool findParent(int arr[],int a,int b) // ������ �ƴ���
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
