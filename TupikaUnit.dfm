object Tupikaforma: TTupikaforma
  Left = 0
  Top = 0
  Caption = 'Tupikaforma'
  ClientHeight = 551
  ClientWidth = 396
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object StringGrid1: TStringGrid
    Left = 40
    Top = 8
    Width = 320
    Height = 433
    ColCount = 2
    DefaultColWidth = 158
    RowCount = 17
    TabOrder = 0
  end
  object ShowText: TButton
    Left = 40
    Top = 440
    Width = 320
    Height = 113
    Caption = 'ShowText'
    TabOrder = 1
    OnClick = ShowTextClick
  end
end
