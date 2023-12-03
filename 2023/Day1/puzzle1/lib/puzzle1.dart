int calculate() {
  return 6 * 7;
}

String findFirstNumber(String code) {
  final int digitPos = code.indexOf(RegExp(r'[0-9]'));
  if (digitPos < 0) return '';

  return code[digitPos];
}

String findLastNumber(String code) {
  final int digitPos = code.lastIndexOf(RegExp(r'[0-9]'));
  if (digitPos < 0) return '';
  return code[digitPos];
}

String replaceWordWithDigit(String code) {
  String replacedCode = code;
  replacedCode = replacedCode.replaceAll(RegExp('one'), '1');
  replacedCode = replacedCode.replaceAll(RegExp('two'), '2');
  replacedCode = replacedCode.replaceAll(RegExp('three'), '3');
  replacedCode = replacedCode.replaceAll(RegExp('four'), '4');
  replacedCode = replacedCode.replaceAll(RegExp('five'), '5');
  replacedCode = replacedCode.replaceAll(RegExp('six'), '6');
  replacedCode = replacedCode.replaceAll(RegExp('seven'), '7');
  replacedCode = replacedCode.replaceAll(RegExp('eight'), '8');
  replacedCode = replacedCode.replaceAll(RegExp('nine'), '9');
  replacedCode = replacedCode.replaceAll(RegExp('zero'), '0');

  return replacedCode;
}
