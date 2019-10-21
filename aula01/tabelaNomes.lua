indice = 1
tabela = {}

function numeroPar (numero)
  local resultado
  if numero%2 == 0 then
    resultado = true
  else
    resultado = false
  end
  return resultado
end

for linha in io.lines ("nomes.txt") do
  if numeroPar(indice) == false then
    linhaAuxiliar = linha
  else
    tabela[linhaAuxiliar] = linha
  end
  indice = indice + 1
end

for nome, sobrenome in pairs (tabela) do
  print (nome, sobrenome)
end