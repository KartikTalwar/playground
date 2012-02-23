class ArrayBub {
	private long[] a;
	private int nElems;

	public ArrayBub(int max) {
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

	public void bubbleSort() {
		int i, j;

		for(i=0; i<nElems; i++) {
			for(j=0; j<nElems-1-i; j++) {
				if( a[j] > a[j+1] ) {
					swap(j, j+1);
				}
			}
		}
	} // bubble sort

	public void swap(int x, int y) {
		long temp;

		temp = a[x];
		a[x] = a[y];
		a[y] = temp;
	}
}

class BubbleSortApp {
	public static void main(String[] args) {
		int maxSize = 100;
		ArrayBub arr;
		arr = new ArrayBub(maxSize);

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

		arr.bubbleSort();

		arr.display();
	}
}
