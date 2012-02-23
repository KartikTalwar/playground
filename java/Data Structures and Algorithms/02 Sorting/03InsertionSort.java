class ArrayInsertion {
	private long[] a;
	private int nElems;

	public ArrayInsertion(int max) {
		a = new long[max];
		nElems = 0;
	}

	public void insert(long value) {
		a[nElems] = value;
		nElems++;
	}

	public void display() {
		for(int i=0; i<nElems; i++) {
			System.out.println(a[i] + " ");
		}
		System.out.println("");
	}

	public void insertionSort() {
		int i, j;

		// outer loop
		for(i=0; i<nElems; i++) {
			long temp = a[i];
			j = i;

			while(j>0 && a[j-1] >= temp) {
				a[j] = a[j-1];
				--j;
			}

			a[j] = temp;
		}
	} // insertion sort

}

class InsertionSortApp {
	public static void main(String[] args) {
		int maxSize = 100;
		ArrayInsertion arr;
		arr = new ArrayInsertion(maxSize);

		arr.insert(77);
		arr.insert(42);
		arr.insert(1);
		arr.insert(34);
		arr.insert(23);
		arr.insert(5);
		arr.insert(5);
		arr.insert(0);
		arr.insert(-2);
		arr.insert(19);
		arr.insert(18);

		arr.display();

		arr.insertionSort();

		arr.display();
	}
}
