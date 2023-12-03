import 'dart:async';
import 'dart:convert';
import 'dart:io';

import 'package:puzzle1/puzzle1.dart' as puzzle1;

void main(List<String> arguments) async {
  int sumOfLines = 0;
  final file = File('input.txt');
  Stream<String> lines = file.openRead().transform(utf8.decoder).transform(LineSplitter());
  try {
    await for (var line in lines) {
      final String correctedLine = puzzle1.replaceWordWithDigit(line);
      final String firstNumber = puzzle1.findFirstNumber(correctedLine);
      final String lastNumber = puzzle1.findLastNumber(correctedLine);
      final String lineValueString = '$firstNumber$lastNumber';
      print('$line: $correctedLine: $lineValueString');
      sumOfLines = sumOfLines + int.parse(lineValueString);
    }
    print('File is now closed.');
    print('Summ of all lines: $sumOfLines');
  } catch (e) {
    print('Error: $e');
  }
  print('Hello world: ${puzzle1.calculate()}!');
}
