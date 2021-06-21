void main() {
  int add = inline(3, 4);
  print(add);
  String t = order(5, 'Pizza');
  print(order(5, 'Pizza'));
}

int inline(int a, int b) => a + b;

String order(int q, String food) => 'Your $q oder confrim $food price';
