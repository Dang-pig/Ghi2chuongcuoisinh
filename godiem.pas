program CheckBoolean;
var
  cangodiem: boolean;
begin
  repeat
    writeln('Enter value for cangodiem (0 or 1): ');
    readln(cangodiem);
  until (cangodiem = false) or (cangodiem = true);

  if cangodiem then
    writeln('Ghi full tiêu đề + ghi nhớ 2 chương cuối')
  else
    writeln('Ghi full tiêu đề 2 chương cuối');
end.
