
function print_key_words(token)
    local str;
    local file1=io.open("words.txt");
    local str=file1:read("*a");
    local list = {};
    local i = 1;
    while i <= #str do
        i = skip_white(str, i);
        local word;
        word, i = read_word(str, i);
        list[#list+1] = word;
    end

    table.sort(list);
    local cc = "";
    local cur_start_with = -1;
    local sz = 1;
    for i=1, #list do
        local word = list[i];
        local c = string.sub(word, 1,1);
        if c == cur_start_with then
            if sz > 5 then
                cc = cc .. "\n       "..word
                sz = 1;
            else
                cc = cc .. " "..word
            end

            sz = sz+1;
        else
            cc = cc .. "\n"..token..word;
            cur_start_with = c;
            sz = 1;
        end
    end
    print(cc);

    cc = "";
    for i=1, #list do
        local word = list[i];
        print(word);
        --cc = cc .. "\n"..word .. "\t\t" .. "TOKEN("..word..")";
        cc = cc .. string.format("\n%-20sTOKEN(%s)", word, word);
    end
    print(cc);

end

function skip_white(str, pos)
    local c = string.sub(str, pos, pos);
    while " " == c or "\n" == c do
        pos = pos+1;
        if (pos <= #str) then
            c = string.sub(str, pos, pos);
        else
            break;
        end
    end
    return pos;
end

function read_word(str, pos)
    local start = pos;
    local c = string.sub(str, pos, pos);
    while c ~= " " and c ~= "\n" do
        pos = pos+1;
        if (pos <= #str) then
            c = string.sub(str, pos, pos);
        else
            break;
        end
    end
    return string.sub(str, start, pos-1), pos;
end

print_key_words("%token ");