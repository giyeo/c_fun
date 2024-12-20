from encoding import *
from decoding import *
from common import *

huffman_tree = build_huffman_tree("ABRACADABRAMUITODABRA")
order_level_transversal(huffman_tree)