object shersteform: Tshersteform
  Left = 0
  Top = 0
  Caption = 'sherstuk'
  ClientHeight = 125
  ClientWidth = 489
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object result: TLabel
    Left = 135
    Top = 98
    Width = 27
    Height = 13
    Caption = 'result'
    OnClick = resultClick
  end
  object divide: TButton
    Left = 378
    Top = 19
    Width = 75
    Height = 25
    Caption = '/'
    TabOrder = 0
    OnClick = divideClick
  end
  object root_but: TButton
    Left = 378
    Top = 50
    Width = 75
    Height = 25
    Caption = 'root'
    TabOrder = 1
    OnClick = root_butClick
  end
  object degree: TButton
    Left = 378
    Top = 81
    Width = 75
    Height = 25
    Caption = 'degree'
    TabOrder = 2
    OnClick = degreeClick
  end
  object digit1: TEdit
    Left = 135
    Top = 23
    Width = 237
    Height = 21
    TabOrder = 3
    Text = 'digit1'
  end
  object digit2: TEdit
    Left = 135
    Top = 50
    Width = 237
    Height = 21
    TabOrder = 4
    Text = 'digit2'
  end
end
