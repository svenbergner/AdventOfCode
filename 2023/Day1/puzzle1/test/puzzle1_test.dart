import 'package:puzzle1/puzzle1.dart';
import 'package:test/test.dart';

void main() {
  test('calculate', () {
    expect(calculate(), 42);
  });

  test('findFirstNumber in a string', () {
    expect(findFirstNumber('abcd42efgh66'), '4');
  });

  test('findFirstNumber in an empty string', () {
    expect(findFirstNumber(''), '');
  });

  test('findFirstNumber in a string which has only digits', () {
    expect(findFirstNumber('1234'), '1');
  });

  test('findLastNumber in a string', () {
    expect(findLastNumber('abcd42efgh66'), '6');
  });

  test('replace one by 1', () {
    expect(replaceWordWithDigit('one'), '1');
  });
  test('replace two by 2', () {
    expect(replaceWordWithDigit('two'), '2');
  });
  test('replace three by 3', () {
    expect(replaceWordWithDigit('three'), '3');
  });
  test('replace four by 4', () {
    expect(replaceWordWithDigit('four'), '4');
  });
  test('replace five by 5', () {
    expect(replaceWordWithDigit('five'), '5');
  });
  test('replace six by 6', () {
    expect(replaceWordWithDigit('six'), '6');
  });
  test('replace seven by 7', () {
    expect(replaceWordWithDigit('seven'), '7');
  });
  test('replace eight by 8', () {
    expect(replaceWordWithDigit('eight'), '8');
  });
  test('replace nine by 9', () {
    expect(replaceWordWithDigit('nine'), '9');
  });
  test('replace zero by 0', () {
    expect(replaceWordWithDigit('zero'), '0');
  });
  test('replace onetwothreefourfivesixseveneightninezero by 1234567890', () {
    expect(replaceWordWithDigit('onetwothreefourfivesixseveneightninezero'), '1234567890');
  });
  test('replace one2threefourfivesixseveneightninezero by 1234567890', () {
    expect(replaceWordWithDigit('one2threefourfivesixseveneightninezero'), '1234567890');
  });
  test('replace oneoneoneone by 1111', () {
    expect(replaceWordWithDigit('oneoneoneone'), '1111');
  });
}
