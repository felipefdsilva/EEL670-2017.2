-- Função Quicksort

function quickSort (listaInteiros, indiceInicio, indiceFim)
  local i, j = indiceInicio, indiceFim
  local pivo, inteiroAux
  pivo = indiceFim
  while i<=j do
    while listaInteiros[i] < pivo do
      i = i + 1
    end 
    while listaInteiros[j] > pivo do
      j = j - 1
    end

    if i <= j then
      inteiroAux = listaInteiros[i]
      listaInteiros[i] = listaInteiros[j]
      listaInteiros[j] = inteiroAux
      i = i + 1
      j = j - 1
      end
  end

  if j > indiceInicio then
    quickSort(listaInteiros, indiceInicio, j)
  elseif (i > indiceFim) then
    quickSort (listaInteiros, i, indiceFim)
  end
end

-- Principal

local listaInteiros = {1, 5, 2, 17, 11, 3, 1, 22, 2, 37}
local indiceInicio, indiceFim = 1, 10

quickSort (listaInteiros, indiceInicio, indiceFim)
for i,v in ipairs (listaInteiros) do
  print (v)
end