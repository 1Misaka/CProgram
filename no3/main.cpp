//(1)����ʹ��ð�����򽫾���n��Ԫ�ص������С����������������������n��n-1��ʼ����һһ�Աȣ�����n-1��Ԫ�رȵ�n��Ԫ�ش�
//�򽻻�������Ԫ�ص�λ�ã��������ƣ�ÿһ�����򶼽�ʣ��Ԫ������С��Ԫ�ط����Ӧλ�ã�������n������

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