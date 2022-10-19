//(1)假设使用冒泡排序将具有n个元素的数组从小到大排序，则从最后两个数据n和n-1开始进行一一对比，若第n-1个元素比第n个元素大，
//则交换这两个元素的位置，依次类推，每一趟排序都将剩余元素中最小的元素放入对应位置，最多进行n趟排序。

//(2)

#include<stdio.h>

int Partition(int arr[], int low, int high) {
	int pivot = arr[low];
	while (low < high)
	{
		while (pivot < arr[high] && low < high)
		{
			--high;
		}
		arr[low] = arr[high];

		while (pivot > arr[low] && low < high)
		{
			++low;
		}
		arr[high] = arr[low];
	}
	arr[low] = pivot;

	return low;
}
void QuickSort(int arr[], int low, int high) {
	if (low<high)
	{
		int pivotpos = Partition(arr, low, high);
		QuickSort(arr, low, pivotpos - 1);
		QuickSort(arr, pivotpos+1, high);
	}
}

int main() {
	int arr[] = { 2,9,5,4,7,3,8 };
	int n = sizeof(arr) / sizeof(int);
	QuickSort(arr, 0, n - 1);
	return 0;

}