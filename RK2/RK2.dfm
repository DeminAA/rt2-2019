object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 231
  ClientWidth = 505
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object ListBox1: TListBox
    Left = 24
    Top = 16
    Width = 369
    Height = 193
    ItemHeight = 13
    TabOrder = 0
  end
  object Show: TButton
    Left = 408
    Top = 184
    Width = 75
    Height = 25
    Caption = 'Show'
    TabOrder = 1
    OnClick = ShowClick
  end
end
