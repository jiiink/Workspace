// ������ �ʿ��� ������ ��� ���⿡ �־ head file�� �־� ����մϴ�.
template <typename C>
void dump(const char *desc, C c) {
	cout.width(12);
	cout << left << desc << "==> ";
	copy(c.begin(),c.end(),ostream_iterator<typename C::value_type>(cout," "));
	cout << endl;
} // dump( ) template
