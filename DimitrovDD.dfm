object DimitrovDima: TDimitrovDima
  Left = 0
  Top = 0
  Caption = 'DimitrovDD1'
  ClientHeight = 509
  ClientWidth = 211
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object StringGridDimitrov: TStringGrid
    Left = 8
    Top = 8
    Width = 198
    Height = 430
    ColCount = 2
    DefaultColWidth = 96
    RowCount = 17
    TabOrder = 0
  end
  object UpdateTable: TButton
    Left = 8
    Top = 444
    Width = 198
    Height = 61
    Caption = 'UpdateTable'
    TabOrder = 1
    OnClick = UpdateTableClick
  end
end
