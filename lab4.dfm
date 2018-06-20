object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 500
  ClientWidth = 262
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
  object StringGrid1: TStringGrid
    Left = 1
    Top = 1
    Width = 265
    Height = 456
    ColCount = 2
    DefaultColWidth = 128
    RowCount = 18
    TabOrder = 0
    ColWidths = (
      128
      128)
    RowHeights = (
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24
      24)
  end
  object Button1: TButton
    Left = 182
    Top = 463
    Width = 75
    Height = 34
    Caption = 'Show'
    TabOrder = 1
    OnClick = Button1Click
  end
  object ListBox1: TListBox
    Left = 8
    Top = 463
    Width = 161
    Height = 34
    ItemHeight = 13
    TabOrder = 2
  end
end
